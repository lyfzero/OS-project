#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<string.h>

#define BUFFER_SIZE 1024    // 缓冲区大小

int main(int argc, char **argv) {
    int from_fd, to_fd; // 读出和写入文件的描述符
    int bytes_read, bytes_write; // 读出和写入的字符数
    char buffer[BUFFER_SIZE]; // 缓冲区
    char *ptr;
    if (argc != 3) { // 未指定文件名
        fprintf(stderr, "Usage: %s from file to file \n\a", argv[0]);
        return -1;
    }
    // 打开源文件
    if ((from_fd = open(argv[1], O_RDONLY)) == -1) {
        fprintf(stderr, "Open %s Error: %s \n", argv[1], strerror(errno));
        return -1;

    }
    // 创建目的文件
    if ((to_fd = open(argv[2], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR)) == -1) {
        fprintf(stderr, "Open %s Error: %s\n", argv[2], strerror(errno));
        return -1;
    }
    // 拷贝文件
    while (bytes_read = read(from_fd, buffer, BUFFER_SIZE)) {
        if ((bytes_read == -1) && (errno != EINTR)) { // 出现错误
            break;
        } else if (bytes_read > 0) {
            ptr = buffer;
            while (bytes_write = write(to_fd, ptr, bytes_read)) {
                
                if ((bytes_write == -1) && (errno != EINTR)) { // 出现错误
                    break;
                } else if (bytes_write == bytes_read) { // 写完所有的字节
                    break;
                } else if (bytes_write > 0) {
                    ptr += bytes_write;
                    bytes_read -= bytes_write;
                }
            }
            if (bytes_write == -1) {
                break;
            }
        }
    }
    // 关闭文件
    close(from_fd);
    close(to_fd);
    printf("done well\n");
    return 1;
}

#include<unistd.h>
#include<stdio.h>
// #include<fcntl.h>
// #include<sys/types.h>
// #include<sys/stat.h>
// #include<errno.h>
// #include<string.h>

pid_t pid_1, pid_2;
int main(int argc, int **argv) {
    pid_1 = fork();
    if(pid_1 < 0) { // 创建失败
        fprintf(stderr, "fork child1 failed\n");
        return -1;
    } else if(pid_1 == 0) { 
        // 子进程1
        createWindow(pid_1);

    } else { // 父进程
        pid_2 = fork();
        if(pid_2 < 0) {
            fprintf(stderr, "fork child1 failed\n");
            return -1;
        } else if(pid_2 == 0) {
            // 子进程2
            createWindow(pid_2);
        } else {
            // 父进程
            pid_t pid_parent =  getppid(pid_1);
            createWindow();
        }
    }
}
void createWindow() {

}
#include<stdio.h>
#include<linux/kernel.h>
#include<unistd.h>
#include<sys/syscall.h>

int main(int argc, char **argv) {
	if(argc != 3) {
		printf("error, please input readFile and writeFile!\n");
	}
	int a = syscall(333, argv[1], argv[2]);
    return 0;
}
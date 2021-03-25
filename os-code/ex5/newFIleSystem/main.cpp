#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#include "global.h"
#include "FS.h"

 
 
 
int main()
{
	char comm[30],name[30];
	char *arg[]={"vim",BUFF,NULL};
	int i,quit=0,choice,status;
 
	Disk=fopen(DISK,"r+");
	init_fs();
 
	while(1){
		printf("%s# ",path);
		scanf("%s",comm);
		choice=-1;
 
		for(i=0;i<CommanNum;++i){
			if(strcmp(comm,command[i])==0){
				choice=i;
				break;
			}
		}
 
		switch(choice){
			/*格式化文件系统*/
			case 0: format_fs();
					break;
			/*退出文件系统*/
			case 1: quit=1;
					break;
			/*创建子目录*/
			case 2: scanf("%s",name);
					make_file(inode_num,name,Directory);
					break;
			/*删除子目录*/
			case 3: scanf("%s",name);
					if(type_check(name)!=Directory){
						printf("rmdir: failed to remove '%s': Not a directory\n",name);
						break;
					}
					del_file(inode_num,name,0);
					break;
			/*进入子目录*/
			case 4:	scanf("%s",name);
					if(type_check(name)!=Directory){
						printf("cd: %s: Not a directory\n",name);
						break;
					}
					if(enter_dir(inode_num,name)){
						change_path(name);//改变路径前缀
					}
					break;
			/*显示目录内容*/
			case 5: show_dir(inode_num);
					break;
			/*创建文件*/
			case 6: scanf("%s",name);
					make_file(inode_num,name,File);
					break;
			/*删除文件*/
			case 7: scanf("%s",name);
					if(type_check(name)!=File){
						printf("rm: cannot remove '%s': Not a file\n",name);
						break;
					}
					del_file(inode_num,name,0);
					break;
			/*对文件进行编辑*/
			case 8: scanf("%s",name);
					if(type_check(name)!=File){
						printf("vim: cannot edit '%s': Not a file\n",name);
						break;
					}
 
					file_read(name);//将数据从文件写入BUFF
					if(!fork()){
						execvp("vim",arg);
					}
					wait(&status);
					file_write(name);//将数据从BUFF写入文件
					break;
			default:
					printf("%s command not found\n",comm);
		}
 
		if(quit) break;
	}
	close_fs();
 
	fclose(Disk);
	return 0;
}
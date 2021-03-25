#ifndef FS_H
#define FS_H

#include "global.h"

typedef struct{
	int inode_map[InodeNum];    //i节点位图
	int blk_map[BlkNum];        //磁盘块位图
	int inode_used;             //已被使用的i节点数目
	int blk_used;               //已被使用的磁盘块数目
}SuperBlk;
 
typedef struct{
	int blk_identifier[BlkPerNode]; //占用的磁盘块编号
	int blk_num;                    //占用的磁盘块数目
	int file_size;                  //文件的大小
	int type;                       //文件的类型
}Inode;
 

class FS {
    Dir 	dir_table[MAXDIRNUM];   // 将当前目录文件的内容都载入内存
    int 	dir_num;                // 相应编号的目录项数

    int	 	inode_num;              // 当前目录的inode编号
    Inode 	curr_inode;             // 当前目录的inode结构

    SuperBlk	super_blk;          // 文件系统的超级块
    FILE*	Disk;

    /*指令集合*/
    char*	command[]={"fmt","quit","mkdir","rmdir","cd","ls","mk","rm","vim"};
    char	path[40]="monster: root";

    int init_fs(void);              //初始化文件系统
    int close_fs(void);             //关闭文件系统
    int format_fs(void);            //格式化文件系统
    
    int open_dir(int);              //打开相应inode对应的目录
    int close_dir(int);             //保存相应inode的目录
    int show_dir(int);              //显示目录
    int make_file(int,char*,int);   //创建新的目录或文件
    int del_file(int,char*,int);    //删除子目录
    int enter_dir(int,char*);       //进入子目录
    int adjust_dir(char*);          //删除子目录后，调整原目录，使中间无空隙
    
    int file_write(char*);          //写文件
    int file_read(char*);           //读文件
    int check_name(int,char*);      //检查重命名,返回-1表示名字不存在，否则返回相应inode
    int type_check(char*);          //确定文件的类型
    
    int free_inode(int);            //释放相应的inode
    int apply_inode();              //申请inode,返还相应的inode号，返还-1则INODE用完
    int init_dir_inode(int,int);    //初始化新建目录的inode
    int init_file_inode(int);       //初始化新建文件的inode
    
    int free_blk(int);              //释放相应的磁盘块
    int get_blk(void);              //获取磁盘块
    
    void change_path(char*);
}

#endif // FS_H

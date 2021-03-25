#ifndef GLOBAL_H
#define GLOBAL_H

#define InodeNum	1024//i节点数目
#define BlkNum		(80*1024)//磁盘块的数目
#define BlkSize		1024//磁盘块大小为1K
#define BlkPerNode	1024//每个文件包含的最大的磁盘块数目
#define DISK 		"disk.txt"
#define BUFF		"buff.txt"//读写文件时的缓冲文件
#define SuperBeg	0//超级块的起始地址
#define InodeBeg	sizeof(SuperBlk)//i节点区起始地址
#define BlockBeg	(InodeBeg+InodeNum*sizeof(Inode))//数据区起始地址
#define MAXDIRNUM	(BlkPerNode*(BlkSize/sizeof(Dir)))//每个目录最大的文件数
#define DirPerBlk	(BlkSize/sizeof(Dir))//每个磁盘块包含的最大目录项
#define Directory	0
#define File		1
#define CommanNum	(sizeof(command)/sizeof(char*))//指令数目

#endif // GLOBAL_H
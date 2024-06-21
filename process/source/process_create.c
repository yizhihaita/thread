#include<process_copy.h>

int process_create(const char*src,const char*dest,int pronum,int blocksize)
{
	pid_t pid;
	int i;
	for(i=0;i<pronum;i++)
	{
		pid=fork();
		//防止子进程循环创建
		if(pid==0)
			break;
			}
		if(pid>0){
			process_wait();
		}
		else if(pid==0){
			int pos;
			char str_pos[100];
			char str_blk[100];
			bzero(str_pos,100);
			bzero(str_blk,100);
			pos=i*blocksize;
			sprintf(str_pos,"%d",pos);
			sprintf(str_blk,"%d",blocksize);
			execl("/home/colin/20230912/PROCESS/process_copy/Mod/copy","copy",src,dest,str_pos,str_blk,NULL);
		}else{
			}
}
			

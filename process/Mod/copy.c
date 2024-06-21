#include"../include/process_copy.h"

int main(int argc,char**argv)
{
	int pos=atoi(argv[3]);
	int blocksize=atoi(argv[4]);
	char buffer[blocksize];
	bzero(buffer,sizeof(buffer));
	int fd_src=open(argv[1],O_RDONLY);
	int fd_dst=open(argv[2],O_WRONLY|O_CREAT,0664);
	lseek(fd_src,pos,SEEK_SET);
	lseek(fd_dst,pos,SEEK_SET);
	int len;
	len=read(fd_src,buffer,sizeof(buffer));
	write(fd_dst,buffer,len);
	printf("%d,%d",pos,blocksize);
return 0;
}

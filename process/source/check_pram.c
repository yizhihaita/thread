#include<process_copy.h>

int check_pram(int argc,const char*src,int pronum)
{
	if(argc<3||argc>5){
		printf("paramater error\n");
		return 1;
	}
	if(access(src,F_OK)!=0){
		perror("access fail");
		return 1;
	}
	if(pronum<=0||pronum>100)
	{
		printf("thread number error\n");
		return 1;
	}
}

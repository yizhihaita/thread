#include<process_copy.h>

void process_wait(void){
	while(wait(NULL)>0);
}

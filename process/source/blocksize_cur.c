#include<process_copy.h>

int blocksize_cur(const char *src, int pronum) {
 	//通过stat可以找到文件属性
	struct stat st;
	if (stat(src, &st) != 0) {
		perror("stat error");
		return -1;
	}
	int filesize = st.st_size;
	int blocksize = filesize / pronum;
	return blocksize + ((filesize % pronum) > 0 ? 1 : 0);  
}

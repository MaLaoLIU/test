#include "my.h"

char buf1[]="abcdefghij";
char buf2[]="ABCDEFGHIJ";
 int main (void){
		int fd;
		if((fd=creat("file.hole",FILE_MODE))<0)
			perror("creat shibai");
		
		if(write(fd,buf1,10)!=10)
			perror("buff1  shibai");

		if(lseek(fd,40,SEEK_SET)==-1)
			perror("lseek shibai");
		
		if(write(fd,buf2,10)!=10)
		perror("buf2 write shibai");

		exit(0);
	}

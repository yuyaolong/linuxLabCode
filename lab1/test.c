#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(void)
{
	int fd;
	fd = open("/dev/kyouko3", O_RDWR);
	char buff[] = "test";
	write(fd, buff, 4);
	char readbuff[4];
	read(fd, readbuff, 4);
	printf("%s\n",readbuff);
	close(fd);
	return 0;
}

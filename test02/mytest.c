#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
	
int main(int argc,char *argv[],char **environ)
{
	int i;
 
	printf("I am mytest!\n");
	printf("mytest:pid = %d, parentpid = %d\n", getpid(), getppid());
	printf("mytest:uid = %d,gid = %d\n", getuid(), getgid());
	
	for(i=0; i< argc; i++)
		printf("argv[%d]:%s\n",i ,argv[i]);
}



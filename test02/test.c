#include<stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc,char * argv[],char ** environ){
      pid_t pid1;
      int   stat_val;
      pid1=fork();    /*这里定义第一个子进程*/
       if(pid1<0){
              perror("Process Creation failed\n");
	      exit(1);}
       else if(pid1 == 0){
	/*子进程*/
              printf("Child process is running\n");
	      printf("Execve pid = %d ,parentpid = %d\n",getpid(),getppid());
              printf("Execve uid = %d,gid =%d\n",getuid(),getgid());
	      execve("mytest",argv, environ);
               }
	else{
	/**/
		printf("Parent process is running\n");
		}
wait(&stat_val);
exit(0);
}


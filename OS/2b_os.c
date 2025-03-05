#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int pid,pid1,pid2;
	pid = fork();
	if(pid==-1){
	 	printf("error in process");
	 	exit(1);
	 }
	 if(pid!=0){
	 	pid1 = getpid();
	 	printf("parent process id:%d \n",pid1);
	 	}
	 else{
	 	pid2=getpid();
	 	printf("chid process id:%d \n",pid2);
	     }
}

#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
int main(){
	char a[100];
	DIR *b;
	struct dirent *c;
	printf("enter dir name:");
	scanf("%s",a);
	b = opendir(a);
	if(b == NULL){
		printf("Dir doesnot exist");
		}
	else{
		while((c = readdir(b))!=NULL){
			printf("%s\n",c->d_name);
			}
	    }
	closedir(b);
}
	

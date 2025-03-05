  #include<stdio.h>
  #include<string.h>
int main(){
	FILE *file;
	int c=0;
	printf("enter filename:");
	char a[1000];
	char ch;
	scanf("%s",a);
	file = fopen(a,"r");
	if(file==NULL){
		printf("error");
		return 1;
	}
	while((ch = fgetc(file))!=EOF){
		if(ch == ' '){
		 c++;
		 }
	}
	fclose(file);
	printf("no of spaces:%d",c);
}

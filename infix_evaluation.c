#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
char postfix[max];
char stack[max];
int top=-1;
void display();
void push(char);
char pop();

void display()
{
      int i;
      for(i=0;stack[top]!='\0';i++){
      printf("%c",stack[top]);
}
}
void push(char x)
{ 
      top++;
      stack[top]=x;
     
}

char pop()
{
   int temp;
   if(top == -1){
   printf("stack is under flow\n");
   exit(1);
   }
   else{
   temp=stack[top];
   top--;
   return temp;
   }     
}
void postfix_eval()
{
  int i,a,b,result;
  char sym;
  for(i=0;postfix[i]!='\0';i++)
  {
     sym = postfix[i];
     if(sym >= 0 && sym <= 9)
     {
       push(sym);
     }
     else {
       a=pop()-'0';
       b=pop()-'0';
 
  switch(sym)
  {
     case '+': result = b+a; break;
     case '-': result = b-a; break; 
     case '*': result = b*a; break;
     case '/': result = b/a; break;
     case '^': result = b^a; break;
  }
     push(result+'0');
} 
}

}   


   int main(){
    printf("enter the postfix expr\n");
    scanf("%s",postfix);
    postfix_eval();
    printf("The postfix evaluation is :");
   // display();
    printf("%d\n",pop());
    

    printf("\n");
   
}

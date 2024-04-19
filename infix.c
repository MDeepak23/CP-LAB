#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
char infix[max],postfix[max];
char stack[max];
int top=-1;
void display();
void push(char);
char pop();
int precedence(char x);
void infix_to_posfix();
void display()
{
      int i;
      for(i=0;postfix[i]!='\0';i++){
      printf("%c",postfix[i]);
}
}
void push(char x)
{  
     
      if(top == max-1)
      printf("stack is over flow\n");
      else{
      printf("enter the elements that store on a stack\n");
     
       top++;
      stack[top]=x;
     
}
}
char pop()
{
   
   if(top == -1){
   printf("stack is under flow\n");}
   else{
   int temp;
   temp=stack[top];
   top--;
   return temp;
   } 
   
   
    
}
int precedence(char x)
{
   if(x == '(')
   return 0;
   if(x == '+' || x == '-')
   return 1;
   if(x == '*' || x == '/') 
   return 2;
   if(x == '^')
   return 3;
}
void infix_to_posfix()
{
   int i,j=0;
   char sym,next;
   for(i=0;infix[i]!='\0';i++){
   sym = infix[i];
   if(sym >= 0 && sym <=9 || sym >= 'a' && sym <= 'z' || sym >='A' && sym <='Z')
   {
      postfix[j++]=sym;
   }
   else if(sym == '('){
   push(sym);}
   else if(sym == ')')
   {
     while((next = pop())!= '('){
     postfix[j++]=next;
     
   }
   }
   else if(sym == '+' || sym == '-' || sym == '*' || sym == '/')
   {
     while(top!=-1 && precedence(stack[top]) >= precedence(sym))
     {
       postfix[j++]=pop();
       push(sym);
     }
   }
    else 
   {
      while(top!=-1) {
      postfix[j++]=pop();
      top--;
   }
}
}
postfix[j]='\0';
}
   int main(){
    scanf("%s",infix);
    infix_to_posfix();
    display();
   
}
      

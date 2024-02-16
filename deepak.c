#include<stdio.h>
void sort(int a[],int n);
void sort(int a[],int n) {
   int i,t,j;
   for(i=0;i<n;i++)
 {
   for(j=0;j<n-i-1;j++)
 {
     if(a[j]>a[j+1])
 {
      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;
      
 }
 }
 }
   
 }
    int main()
 {
    int num,a[20],i;
    printf("enter the size of an array:\n");
    scanf("%d",&num);
    printf("enter the elements before sorting\n");
    for(i=0;i<num;i++)
    scanf("%d",&a[i]);
    printf("after sorting the sorting\n");
    sort(a,num);
    for(i=0;i<num;i++)
    printf("%d\n",a[i]);
    int start,end,mid,pos=-1,key;
    printf("enter the key\n");
     scanf("%d",&key);
    start=0;
    end=num-1;
   
    while(start<=end)
  {
      mid=(start+end)/2;
      if(key==a[mid])
  {
      pos=mid+1;
      break;
  }
      else if(key<a[mid])
  {
       end=mid-1;
  }
       else 
  {
       start=mid+1;
  }
  }
      if(pos>=0)
      printf("key is found at %d",pos);
      else
      printf("key is not found");
    
       
    
 }
     
   

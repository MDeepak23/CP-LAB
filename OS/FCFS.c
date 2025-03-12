#include<stdio.h>
int main(){
	int n;
	printf("enter the no of process:");
	scanf("%d",&n);
	int bt[n],tat[n],wt[n],avgwt=0,avgtat=0;
	for(int i=0;i<n;i++){
		printf("enter burst time for process %d ",i);
		scanf("%d",&bt[i]);
		}
	wt[0]=0,tat[0]=bt[0];
	avgtat = bt[0];
	for(int i=1;i<n;i++){
		wt[i] = bt[i-1]+wt[i-1];
		tat[i] = tat[i-1]+bt[i];
		avgwt = avgwt+wt[i];
		avgtat = avgtat+tat[i];
		}
	printf("\t PROCESS\tBURST TIME\tWAITING TIME\tTURNAROUNDTIME\n");
	for(int i=0;i<n;i++){
		printf("\n\t\t%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
		}
	printf("\n\tavgwt:%d",avgwt/n);
	printf("\n\tavgtat:%d\n",avgtat/n);
	}
		


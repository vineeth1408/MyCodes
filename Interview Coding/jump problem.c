#include<stdio.h>
#include<string.h>
int min(int,int);
int main(){
	int n,count=0,i;
	printf("enter size");
	scanf("%d",&n);
	int c[111],dp[111];
	for(i=0;i<n;i++){
		scanf("%d",&c[i]);
	}
	for(i=0;i<n-1;i++){
		if(c[i+2]==0){
			i=i+2;
		}		
		else{
			i++;
		}
		count++;
	}
	printf("%d",count);
}

int min(int a,int b){
	if (a>b)
	return a;
	else
	return b;
}

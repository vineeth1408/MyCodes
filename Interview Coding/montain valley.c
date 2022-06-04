#include<stdio.h>
#include<string.h>

void main(){
	int n,count=0,height=0,i;
	printf("enter steps count");
	scanf("%d",&n);
	char steps[n];
	scanf("%s",&steps);
	for(i=0;i<n;i++){
		if( steps[i] == 'U'){
			if(height == -1){
				count ++;
			}
			height ++;
		}	
		else{
			height--;
		}
	}
	printf("%d",count);
}

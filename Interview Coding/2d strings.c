#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, i,remove,index;
	char a[10][20];
    printf("Enter the number of names to be printed: ");
    scanf("%d\n", &n);
    for(i=0;i<n;i++){
    	scanf("%s",&a[i]);
	}
	printf("Enter index to start removing");
	scanf("%d",&index);
	
	printf("Enter how many to remove");
	scanf("%d",&remove);
	for(i=0;i<n;i++){
    	if(i==index){
    		i=i+remove;
		}
		printf("%s\t",a[i]);
	}
}

#include<stdio.h>
void main(){
	int a=0,b=1,c;
	int i;
	int fibo[10];
	fibo[0]=0;
	fibo[1]=1;
	for(i=0;i<10;i++){
		c=a+b;
		printf("%d\n",a);
		a=b;
		b=c;		
	}

	for(i=2;i<10;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for(i=0;i<10;i++){
		printf("%d ",fibo[i]);
	}
}

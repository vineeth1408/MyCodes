#include<stdio.h>
void main()
{
int i=0,j=1,k,n,c;
printf("enter ");
scanf("%d",&n);

for(c=1;c<=n;c++)
{
k=i+j;
printf("%d\t",i);
i=j;

j=k;
}

}

#include<stdio.h>
void main()
{
float a,b,c,d,k;
printf("Enter any two  numbers\n");
k=scanf("%f%f",&a,&b);

if (k!=2)
printf("error\n");
else if (a<b)
printf("Up\n");
else if (a>b) 
printf("Down\n");
else  
printf("Equal\n");
}

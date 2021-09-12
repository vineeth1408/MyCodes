#include<stdio.h>
void main()
{
float C,F;
printf("converting centigrade to farenheit\n");
printf(" Give Celsius");
scanf("%f%f",&C,&F);
C=(F-32)/1.8;
F=(C*1.8)+32;
printf("centigrade %f\n",C);
printf("farenheit %f\n",F);
}

#include<stdio.h>
void main()
{
float C,F;
printf("Enter celsius\n");
scanf("%f",&C);
F=(C*1.8)+32;
printf("fareheit %f\n",F);

printf("Enter farenheit\n");
scanf("%f",&F);
C=(F-32)/1.8;
printf("celsius %f\n",C);
}


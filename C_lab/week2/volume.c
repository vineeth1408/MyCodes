#include<stdio.h>
#define pi 3.14
void main()
{
float r,area,volume;
printf("Enter radius\n");
scanf("%f",&r);
area=4*pi*r*r;
volume=4/3*pi*r*r*r;
printf("Area of sphere %f\n",area);
printf("volume of sphere %f\n",volume);
}

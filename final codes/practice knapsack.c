#include<stdio.h>
int swap(float *a,float *b)
{
	float *temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}
void main()
{
	float ratio[10],value[10],weight[10];
	int i,j,n;
	printf("enter size\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter value(%d) weight (%d)",i,i);
		scanf("%f",&value[i]);
		scanf("%f",&weight[i]);
	}
	for(i=0;i<n;i++)
	{
		ratio[i]=value[i]/weight[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ratio[j] < ratio[j+1])
			{
				swap(&ratio[j],&ratio[j+1]);
				swap(&value[j],&value[j+1]);
				swap(&weight[j],&weight[j+1]);
			}
		}
	}
	float capacity,total_weight=0;
	float profit=0;
	float remain;
	printf("enter capacity value\n");
	scanf("%f",&capacity);
	for(i=0;i<n;i++)
	{
		if(total_weight+ weight[i] <= capacity)
		{	
			total_weight=total_weight + weight[i];
			profit = profit + value[i];
			printf("%f \t",weight[i]);
		}
		else
		{
			remain= capacity-total_weight;
			profit= profit + (remain * ratio[i]);
			printf("%f\n",remain);
		}
	}
	printf("%f\n",profit);	
}

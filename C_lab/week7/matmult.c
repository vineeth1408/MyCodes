#include<stdio.h> 
void main()                                 					
{        								//1 2 3  00  3 2 1 
int a[10][10],b[10][10],c[10][10];					//4 5 6	 10  6 5 4 
int i,j,k,c1,r1,c2,r2;							//7 8 9	 20  9 8 7	
printf("Enter the order of first matrix\n");			     // (ikkj 00*00)+01*10+02*20   00*01+01*11+02*21  00*02+01*12+02*22
scanf("%d%d",&r1,&c1);							//10*00+11*10+12*20   10*01+11*11+12*21  10*02+11*12+12*22
printf("Enter the order of second matrix\n");				//20*00+21*10+22*20   20*01+21*11+22*21  20*02+21*12+22*22	
scanf("%d%d",&r2,&c2);
printf("Enter %d elements in 1st matrix\n",r1*c1);
for(i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
    scanf("%d",&a[i][j]);
 }
  printf("Enter %d elements in 2nd matrix\n",r2*c2);
     
     for(i=0;i<r2;i++)
        {
         for(j=0;j<c2;j++)
             scanf("%d",&b[i][j]);
        }
		  
		if(c1==r2)
    {
         
	   	   for(i=0;i<r1;i++)
	          {      
		     for(j=0;j<c2;j++)
		      {
		            c[i][j]=0;
			for (k=0;k<r2;k++)            
		            {
		              c[i][j]+=a[i][k]*b[k][j];
		            }
            	      }
		  }
		      
		      for(i=0;i<r1;i++)
	         {
		      
		       for(j=0;j<c2;j++)
		       {
		          printf("%d \t",c[i][j]);
	               }
	      printf("\n");
	        }
	      
    }
      
      }
      



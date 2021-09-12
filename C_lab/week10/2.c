#include<stdio.h>
#include<string.h>
struct cricket
{
 char team[10];
 char name[10];
 float avg;
 }cric[100];
 
 int main()
 {  int i,j,k,x=0,n;
 printf("Enter player range\n");
 scanf("%d",&n);
    for(i=0;i<n;i++)
      {
        printf("Enter team %d name: ",i+1);
        scanf("%s",cric[i].team);
        printf("Enter player %d name: ",i+1);
        scanf("%s",cric[i].name);
        printf("Enter %d player avg: ",i+1);
        scanf("%f",&cric[i].avg);
        printf("\n");
      }
      for(i=0;i<n;i++)
      {
         for(j=i+1;j<n;j++)
         {
          if(strcmp(cric[i].team,cric[j].team)==0)
           x++;   
   
         }
           
         if(x==0)
         { 
              printf("%s\n",cric[i].team);
             printf("-------\n");
              for(k=0;k<n;k++)
              {
               if(strcmp(cric[i].team,cric[k].team)==0) 
               {
               
                printf("%s\n",cric[k].name);
                  printf("%f\n",cric[k].avg);
               }
              }
         
         }
         
         x=0;
         }
         }
         
         
         
 
                     
       
           
                
           
             
            

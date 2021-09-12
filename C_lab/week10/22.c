#include<stdio.h>i 
#include<string.h>
struct cricket
{
char team[100];
char name[100];
float avg;
}cric[3];
int main()
 {  int i,j,k,x=0,q,a[100],p=0;
    for(i=0;i<3;i++)
      {
        printf("Enter team %d name: ",i+1);
        scanf("%s",cric[i].team);
        printf("Enter player %d name: ",i+1);
        scanf("%s",cric[i].name);
        printf("Enter %d player avg: ",i+1);
        scanf("%f",&cric[i].avg);
      }
      for(i=0;i<3;i++)
   {
         for(j=i+1;j<3;j++)
       {
          if(strcmp(cric[i].team,cric[j].team)==0)  
           x++; 
       }
       if(x==0)
        {
               a[p]=i;
               p++;
        }
        x=0;
    }
       for(i=0;i<p;i++)
      { 
       printf("%s\n",cric[a[i]].team);
          for(j=0;j<3;j++)
          {   
            if(strcmp(cric[a[i]].team,cric[j].team)==0)
           
             printf("%s\n",cric[j].name);
           
          }
      }
}
             
              
            
            

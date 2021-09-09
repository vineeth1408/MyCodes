#include<stdio.h>
#include<string.h>
void main()
{
int n;
printf("Enter how many names\n");
scanf("%d",&n);
 char a[200][100];
 int i,j,k,l;
 char temp[24];
 printf("Enter names\n");
 for(i=0;i<=n;i++)
  {
  gets(a[i]);
   //scanf("%s",&a[i][0]);
  }
   for(i=0;i<=n;i++)
     {
      for(j=i+1;j<=n;j++)
       {
      
            if(strcmp(a[i],a[j])>0)
            {
             strcpy(temp,a[i]);
             strcpy(a[i],a[j]);
             strcpy(a[j],temp);
            }
            
        }
     }
   for(i=0;i<=n;i++)
   printf("%s\n",a[i]);
   }

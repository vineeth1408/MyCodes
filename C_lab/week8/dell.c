#include<stdio.h>
#include<string.h>
void del(char [],int,int);
int main()
{
  char a[100];
  int n,x;
  printf("Enter string\n");
  gets(a);
  printf("Enter position\n");
  scanf("%d",&n);
  printf("Enter size to delete\n");
  scanf("%d",&x);
  
  del(a,n,x);
  }
  void del(char a[],int n,int x)
  {
    int i;
    if(x>strlen(a))
      {
      printf("Error\n");
      }
      else{
    for(i=0;i<strlen(a)-1;i++)
       {
         if(i==n)
         {
           i=i+x;
           }
         printf("%c",a[i]);
         }
         }
         }     
           
      

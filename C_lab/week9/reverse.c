#include<stdio.h>
#include<string.h>
char revv(char [],int);
int main()

{
  char a[100];
  int k;
  printf("Enter string\n");
  gets(a);
  k=strlen(a);
  revv(a,k);
}
char revv(char a[],int k)
{
  if(k>0)
{
  printf("%c",a[k-1]);
  
  return (revv(a,k-1));
}
  }
  

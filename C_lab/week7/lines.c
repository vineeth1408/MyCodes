#include<stdio.h>
void main()
{
char a[100];
int i,l=0,c=0;
printf("Enter string\n to stop entering the text \n press $\n");

for(i=0; ;i++)
 {
  scanf("%c",&a[i]);
   if(a[i]=='$');
   break;x
   }
   for(i=0;a[i]!='$';i++)
    {
     if(a[i]=='\n')
       c++;
       if((a[i]==' ')||(a[i]=='\n'))
        l++;
        }
        printf("no of characters=%d\nno of lines=%d\nno of words=%d\n",i,c+1,l+1);
        }

#include<stdio.h>
void main()
{
int i;
for(i=0;i<16;i++)
{
printf("Mux(a=a[%d],b=b[%d],sel=sel[0],out=w1%d);\nMux(a=c[%d],b=d[%d],sel=sel[0],out=w2%d);\nMux(a=e[%d],b=f[%d],sel=sel[0],out=w3%d);\nMux(a=g[%d],b=h[%d],sel=sel[0],out=w4%d);\nMux(a=w1%d,b=w2%d,sel=sel[1],out=w5%d);\nMux(a=w3%d,b=w4%d,sel=sel[1],out=w6%d);\nMux(a=w5%d,b=w6%d,sel=sel[2],out=out[%d);\n",i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i,i);
}
}

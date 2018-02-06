#include<stdio.h>
{
int a,b,t=0;
scanf("%d%d",&a,&b);
if(a!=0)
{
t=a;
a=b;
b=t;
printf("%d%d",a,b);
}
return 0;
}

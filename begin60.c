#include<stdio.h>
int main()
{
int a=0,b=1,c,n=5,i;
printf("%d %d",a,b);
for(i=0;i<=n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
	return 0;
	
}

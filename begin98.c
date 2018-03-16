#include<stdio.h>
int main()
{
int a[50],i,n;
printf("enter the numbers");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
if(a[i]!=i)
{
printf("%d",i);
}
}
}

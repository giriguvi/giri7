#include<stdio.h>
int main()
{
int a,i,l,r;
printf("enter tne numbers:");
scanf("%d %d %d",&a,&l,&r);
for(i=l;i<=r;i++)
{
if(i==a)
{
printf("the given number is between the two numbers");
}
return 0;
}
}

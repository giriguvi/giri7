#include<stdio.h>
int main()
{
int a,sum=1,res;
printf("enter the number");
scanf("%d",&a);
while(a!=0)
{
 res=a%10;
 sum=sum*res;
 a=a/10;
}
printf("%d",sum)
}

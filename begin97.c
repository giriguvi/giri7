#include<stdio.h>
int main()
{
int a,b,sum=0;
scanf("%d",&a);
while(a!=0)
{
b=n%10;
sum=(sum*10)+b;
n=n/10;
}
printf("reverse number is %d",sum);
}

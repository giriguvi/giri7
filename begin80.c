#include<stdio.h>
int main()
{
 int a,t;
 printf("enter the numbers:");
 scanf("%d",&a);
 while(a!=0)
 {
     t=a%10;
     if(t%2==1)
     printf("odd numbers %d",t);
     a=a/10;
 }
 return 0;
     
 }

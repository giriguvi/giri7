#include<stdio.h>
int main()
{
int a,i,count=1;
printf("Enter the number");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
 count++;
 }
 if(count!=1)
 printf("composite number");
 else
 printf("No");
}

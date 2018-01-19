#include<stdio.h> 
void main()
{
int a,j,i;
printf("enter the two limits");
scanf("%d%d",&a,&j);
for(i=a;i<j;i++)
{
if((i)%2==0)
printf("%d\n",i);
}
}

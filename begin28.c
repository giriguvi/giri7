#include<stdio.h>
void
{
int i,a[10],m;
printf("enter no of elements in an array\n");
scanf("%d",&m);
printf("enter the elements in an array:\n");
for(i=0;i<m;i++)
{
scanf("%d\n",&a[i]);
}
for(i=0;i<m;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}
}

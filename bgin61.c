#include<stdio.h>
int main()
{
char a[50],b[50];
int i,j;
printf("enter the string");
scanf("%s",a);
printf("enter the value");
scanf("%d",&j);
for(i=0;i<j;i++)
{
b[i]=a[i];
}
printf("%s",b);
return 0;
}

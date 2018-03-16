#include<stdio.h>
#include<string.h>
int main()
{
char a[40];
int i,l,n;
printf("enter the numbers");
scanf("%s",&a);
scanf("%d",&n);
printf("enter the last %d values want to print",n);
l=strlen(a);
for(i=l-n;i<=l;i++)
{
printf("%c",a[i]);
}
}

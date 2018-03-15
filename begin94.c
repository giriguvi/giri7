#include<stdio.h>
int main()
{
int a[10],b,c,i;
scanf("%d %d",&b,&c);
printf("enter the %d numbers",b);
for(i=1;i<=b;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<=b;i++)
{
if(a[i]==c)
{
printf("%d",a[i]);
}
}

}

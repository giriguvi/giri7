#include<stdio.h>
int main()
{
int i,j,k;
scanf("%d%d",&i,&j);
k=i-j;
printf("difference %d",k);
if(k%2==0)
{
printf("even number");
}
else
{
printf("odd number");
}
}

#include<stdio.h>
void main()
{
	int i,fact=1,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 fact=fact*i;
	 printf("%d\n",fact);
	}
	
}
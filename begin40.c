#include<stdio.h>
int main()
{
	int i,a,b,m;
	printf("enter the  numbers:");
	scanf("%d",&m);
	a=0;
	b=1;
	c=0;
	for(i=0;i<=m;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("the fibanoci term is%d",c);
	
		return 0;
	}
	
	
}

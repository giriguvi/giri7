#include <stdio.h>

int main(void) {
	int a,count=0;
		printf("enter the numbers:");
	scanf("%d",&a);

	whil(a!=0)
	{
		a=a/10;
		count++;
	}
	printf("the sum is %d",count);
	return 0;
}

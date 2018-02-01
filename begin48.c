#include <stdio.h>

int main(void) {
	int i,a[2],sum=0;
	for(i=1;i<=2;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=2;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/2;
	printf("%d",avg);
	return 0;
}

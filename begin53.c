#include <stdio.h>

int main(void) {
int a,b=0,c=0;
scanf("%d",&a);
while(a!=0)
{
	b=a%10;
	c=b+c;
	b=b/10;
}
   printf("%d",c);
	return 0;
}

#include<stdio.h>
int main()
{
    int a,b,n;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    n=a*b;
    printf("square value=%d\n",n);
    if(b==a)
    {
        printf("it is a perfect square");
    }
    else
    {
        printf("it is not a perfect square");
    }
    return 0;
}

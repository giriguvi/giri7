#include<stdio.h>
int main()
{
    int n;
    printf("enter the numbers:");
    scanf("%d",&n);
    if(n%13==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

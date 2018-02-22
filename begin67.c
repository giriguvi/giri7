#include<stdio.h>
void main()
{
    int i,j;
    printf("enter the numbers:");
    scanf("%d",&j);
    for(i=j;i<=j+10;i++)
    {
        if(i%10==0)
        {
            printf("%d",i);
            break;
        }
    }
}

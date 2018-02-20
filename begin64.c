include<stdio.h>
void main()
{
    int N,M,c;
    printf("enter the two numbers:\n");
    scanf("%d%d",&N,&M);
    c=N+M;
    printf("the sum is %d \n",c);
    if(c%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
    
}

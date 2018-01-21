#include <stdio.h>
#include<string.h>
void main()
{
    char a[100] ;
    int l;
    scanf("%s",a);
    l=strlen(a);
    a[l]='.';
    printf("%s",a);
}

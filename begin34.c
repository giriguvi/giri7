#include<stdio.h>
void main()
{
char j[100];
int c=0;
scanf("%s",j);
for(i=0;j[i]!='\0';i++)
{
if(j[i]=='.')
c++;
}
printf("\n lines=%d",c);
}

#include<stdio.h>
#include<string.h>
voi main()
{
int i,j;
char str[10][10],temp[50];
for(i=1;i<=10;i++)
{
scanf("%s",str[i])
}
for(i=0;i<=10;++i)
{
for(j=0;j<=9;j++)
{
if(strcmp(str[i],str[j])>0)
{
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp);
}
}
printf("lexicographical order:")
for(i=1;i<=10;i++)
{
puts(str[i]);
}
return 0;
}

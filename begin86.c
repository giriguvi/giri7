#include<stdio.h>
int main()
{
int n,i,count=0;
char s[40]="1234";
n=strlen(s);
for(i=0;i<=n;i++)
{
if(s[i]==s[i+1])
{
count++;
}
}
if(count==0)
{
printf("isogram");
}
else
{
printf("not an isogram");
}
return 0;
}

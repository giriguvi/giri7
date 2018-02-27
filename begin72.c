#include<stdio.h>
int main()
{
char a[20];
int i,c=0;
printf("enter the string:");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
    c++;
}
}
if(c!=0)
{
    printf("have vowels");
}
else
{
    printf("not vowels");
}
return 0;
}

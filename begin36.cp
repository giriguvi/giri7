#include<iostream>
#include<string.h>
void main()
{
char c[30]="its me gj.44";
int i,s=0;
for(i=0;c[i]!=0;i++)
{
	if((c[i]>='1')&&(c[i]<='9'))
	s++;

}
 cout<<s;
}

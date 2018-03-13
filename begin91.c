#include<stdio.h>
int main()
{
int l,b,h,m,n,o,s,v;
printf("enter the length:");
scanf("%d",&l);
printf("enter the breadth:");
scanf("%d",&b);
printf("enter the height:");
scanf("%d",&h);
m=l*b;
n=b*h;
o=h*l;
s=2*(m*n*o);
v=(l*b*h);
printf("surface of the cuboid---> %d",s);
printf("volume of the cuboid----> %d",v);
}

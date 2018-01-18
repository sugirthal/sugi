#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the values");
scanf("%d%d%d",&a,&b,&c);
if(a>b&a>c)
{
printf("a is largest element");
}
else if(b>c)
{
printf("b is largest element");
}
else
{
printf("c is largest element");
}
}

#include<stdio.h>
void main()
{
int n,m=1,s,temp;
printf(" ");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
s=temp%10;
m=m*s;
temp=temp/10;
}
printf("%d",m);
}

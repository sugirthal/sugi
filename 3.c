#include<stdio.h>
int main()
{
int n,rev,r=0;
printf(" ");
scanf("%d",&n);
while(n!=0)
{
rev=n%10;
r=r*10+rev;
n=n/10;
}
printf("%d",r);
return 0;
}

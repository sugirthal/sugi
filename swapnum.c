#include<stdio.h>
int main()
{
int n,m,t;
printf("enter the numbers ");
scanf("%d%d",&n,&m);
t=n;
n=m;
m=t;
printf("%d",n);
printf("\t%d",m);
return 0;
}

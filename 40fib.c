#include<stdio.h>
int main()
{
int n,a=0,b=1,c,i;
printf("enter the value ");
scanf("%d",&n);
printf("%d%d",a,b);
for(i=0;i<=n;i++)
{
c=a+b;
printf("\t%d",c);
a=b;
b=c;
}
return 0;
}

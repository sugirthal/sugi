#include<stdio.h>
int main()
{
int a=0,b=1,c,i,n;
printf("enter the values ");
scanf("%d",&n);
printf("%d %d",a,b);
for(i=0;i<=n;i++)
{
c=a+b;
printf("\t %d",c);
a=b;
b=c;
}
return 0;
}

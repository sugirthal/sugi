#include<stdio.h>
int main()
{
int x=0,y=1,z,i,n;
printf("enter the values ");
scanf("%d",&n);
printf("%d %d",x,y);
for(i=0;i<=n;i++)
{
z=x+y;
printf("\t %d",z);
x=y;
y=z;
}
return 0;
}

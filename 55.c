#include<stdio.h>
int main()
{
int m,n,x;
printf(" ");
scanf("%d%d",&m,&n);
x=m*n;
printf("%d",x);
if(x%2==0)
{
printf("\t even");
}
else
{
printf("\t odd");
return 0;
}
}

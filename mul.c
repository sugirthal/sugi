#include<stdio.h>
int main()
{
int n,i,num=0;
printf("enter the value ");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
num=num+n;
printf("\t %d",num);
}
return 0;
}

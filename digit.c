#include<stdio.h>
int main()
{
int n,temp,f=1;
printf("enter the same number: ");
scanf("%d",&n);
temp=n;
while(temp)
{
temp=temp/10;
f=f*10;
printf("enter the digits");
}
while(f>1)
{
printf("%d",n/f);
n=n%f;
}
return 0;
}

#include<stdio.h>
int main()
{
int n,temp,f=1;
printf("enter the number: \n");
scanf("%d",&n);
temp=n;
while(temp)
{
temp=temp/10;
f=f*10;
}
while(f>1)
{
f=f/10;  
printf("%d",n/f);
n=n%f;
}
return 0;
}

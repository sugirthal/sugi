#include<stdio.h>
void main()
{
int n,sum=0,r;
printf("enter an integer to check palindrome or not");
scanf("%d",&n);
if(n==sum)
{
r=n%10;
sum=sum*10+r;
n=n/10;
printf("%d yes",n);
}
else
printf("%d no",n);
}

#include<stdio.h>
void main()
{
int n,i;
printf(" ");
scanf("%d", &n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
break;
}
}
if(i>n/2)
printf("%d no ",n);
else
printf("%d yes",n);
}

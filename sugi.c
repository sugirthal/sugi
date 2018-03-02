#include<stdio.h>
void main()
{
int n,temp,a[100],i,add;
printf(" ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
temp=a[i];
add=temp+a[i];
}
printf("%d",add);
}

#include<stdio.h>
void main()
{
int n,a,i,s;
printf("Enter the Number is prime or not");
scanf("%d%d", &n,&a);
for(s=n;s<=a;s++)
for(i=2; i<=s/2;i++)
{
if(s%i==0)
{
break;
 }
if(i>s/2)
printf("%d the number is prime",n);
else
printf("%d the number is not prime",n);
}

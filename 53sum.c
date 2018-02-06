#include<stdio.h>
void main()
{
int num,sum,r;
printf("the num is \n");
scanf("%d",&num);
while(num>0)
{
r=num%10;
sum=sum+r;
num=num/10;
}
printf("%d",sum);
}

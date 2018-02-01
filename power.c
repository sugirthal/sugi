#include<stdio.h>
void main()
{
int pow,base,n=1;
printf("enter power and base ");
scanf("%d%d",&pow,&base);
while(pow!=0)
{
  n=n*base;
  pow--;
}
  printf("%d",n);
}
  

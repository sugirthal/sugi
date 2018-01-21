#include <stdio.h>
int main()
{
int number, sum=0, rem=0,tempNumber;
printf("Enter an integer number: ");
scanf("%d", &number);
tempNumber=number;
while(tempNumber!=0)
{
  rem=tempNumber%10;
  sum=sum + (rem*rem*rem);
  tempNumber/=10;
}  
if(sum==number)  
printf("%d yes",number);
else
printf("%d no",number);
return 0;
}

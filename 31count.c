#include<stdio.h>
int main()
{
int a=0,b=0,c=0,d=0;
while(getchar()!=EOF)
{
++b;
if(a==\n)
++c;
if(a==''||a==\t)
++d;
printf("%d",a);
}
else
return 0;
}

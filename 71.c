#include<stdio.h>
#include<string.h>
void main()
{
char s[100],a[100];
printf(" ");
scanf("%s",&s);
a=strrev(s);
if(a==s)
{
printf("Yes");
}
else
{
printf("No");
}
}

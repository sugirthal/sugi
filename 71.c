#include<stdio.h>
#include<string.h>
void main()
{
char s[100],a[100];
printf(" ");
scanf("%s",&s);
  strcpy(a,s);
strrev(a);
if(strcpy(a,s)==0)
{
printf("Yes");
}
else
{
printf("No");
}
}

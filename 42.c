#include<stdio.h>
#include<string.h>
int main()
{
char s1[50],s2[50];
int l1,l2;
printf(" ");
scanf("%s",s1);
printf(" ");
scanf("%s",s2);
l1=strlen(s1);
l2=strlen(s2);
if(l1==l2)
{
  printf("%s",s1);
}
else if(l1>l2)
{
printf("%s",s1);
}
else
{
  printf("%s",s2);
}
return 0;
}

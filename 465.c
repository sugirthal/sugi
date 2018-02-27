#include<stdio.h>
#include<string.h>
int main()
{
char s[100],a;
printf(" ");
scanf("%s",s);
a=strrev(s);
if(a==s)
{
printf("yes");
}
else
{
printf("No");
}
return 0;
}


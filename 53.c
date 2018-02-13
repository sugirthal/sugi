#include<stdio.h>
int main()
{
    int n,m,result=0;
    printf(" ");
    scanf("%d",&n);
    while(n!=0)
    {
    m=n%10;
    result=result+m;
    n=n/10;
    }
        printf("%d",result);
    return 0;
}

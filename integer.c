#include<stdio.h>
main()
{
int a[]={1,2,3,4,5};
  int sum=0,n,k,i;
  printf("enter the values of n");
  scanf("%d",&n);
  printf("enter the values of k");
  scanf("%d",&k);
  for(i=1;i<n;i++)
    printf("%d",a[i]);
  printf("enter the k value");
  scanf("%d"&k);
  for(i=1;i<k;i++)
  {
    sum=sum+a[i];
  }
  printf("%d",sum);
}
    

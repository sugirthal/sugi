main()
{
int n,i;
printf("Enter the integer to find prime or not");
scanf("%d", &n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
break;
}
}
if(i>n/2)
printf("%d the given number is prime",n);
else
printf("%d the given number is not prime",n);
}

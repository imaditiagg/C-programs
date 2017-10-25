#include<stdio.h>   // time  2^n and space n


int fib(int n)
{
if(n==0 || n==1)
return n;
else

return fib(n-1)+fib(n-2);


}

int main()
{
int n,i;
printf("Enter n :");
scanf("%d",&n);
int x= fib(n);

printf("\n%d th term is %d",n, x);

printf("\nThe sequence till n:- ");
for( i=0;i<=n;i++)
    printf("%d ",fib(i));
return 0;

}

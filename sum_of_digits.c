#include<stdio.h>
int main()
{
	int n;
	int sum=0;
	int product=1;
	int m;
	printf("\n\n\t\t please enter the number:-  ");
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		product=product*m;
		sum=sum+m;
		n=n/10;
	}
    printf("\n\n\t\t Sum of digits is %d and product is %d",sum,product);
    return 0;
}


#include<stdio.h>
int main()
{
	int num;
	int rev=0;
	int m;
	printf("\n\n\t\t Input a number to be reversed");
	scanf("%d",&num);

	while(num>0)
	{
		 m= num%10;
		 rev=rev*10 + m;
		 num=num/10;
	}
    printf("\n\n\t\t The new reversed number is %d ",rev);

	return 0;
}


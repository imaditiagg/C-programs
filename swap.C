#include<stdio.h>
int main()
{

	int n1, n2,temp;
	printf("\n\n\t\tEnter n1: ");
	scanf("%d",&n1);
	printf("\n\n\t\tEnter n2: ");
	scanf("%d",&n2);
	temp=n1;       //swapping using another variable
	n1=n2;
	n2=temp;

	printf("\n\n\t\tAfter swapping using another variable");
	printf("\n\n\t\tn1= %d",n1);
	printf("\n\n\t\tn2= %d",n2);

	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;

	printf("\n\n\t\tNow swapping again without using another variable");
	printf("\n\n\t\tn1= %d",n1);
	printf("\n\n\t\tn2= %d",n2);
	printf("\n\n\t\t ");
	return 0;
}

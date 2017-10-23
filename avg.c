#include<stdio.h>
int main()
{
int a[10],i,sum=0;
printf("Enter temperature of 10 days :");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("\nAverage temperature is %d ",sum/10);
return 0;
}

#include<stdio.h>
int main()
{
int a[20],n,x,found=0,i;
printf("Enter size of the array: ");
scanf("%d",&n);
printf("\nEnter the elements into array :-> ");
for( i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the element to be searched: ");
scanf("%d",&x);
i=0;
for(i=0;i<n;i++)
{
if(x==a[i])
{
printf("\nElement %d is found at position %d",x,i+1);
found=1;
break;
}
}
if(found==0)
printf("Sorry,element not found ");

return 0;
}


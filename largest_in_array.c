#include<stdio.h>
int main()
{
int size,largest,i,j;
printf("Enter size:- ");
scanf("%d",&size);
int a[size];
printf("\nenter array:- ");
for( i=0;i<size;i++)
{
scanf("%d",&a[i]);


}
largest=a[0];
for( j=1;j<size;j++)
{
if(a[j]>largest)
largest= a[j];

}

printf("Largest element is :- %d ", largest);
return 0;




}

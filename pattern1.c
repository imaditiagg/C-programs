#include<stdio.h>
int main()
{
int rows,i,j;
printf("Enter no. of rows: ");
scanf("%d",&rows);

for( i=1;i<=rows;i++) //for rows
{
for( j=1;j<=i;j++)
{
  printf("%d",j);
}

printf("\n");
}
return 0;
}


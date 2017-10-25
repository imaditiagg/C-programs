#include<stdio.h>
int main()
{
int rows,cols,i,j;
printf("Enter no. of rows:- ");
scanf("%d",&rows);
printf("\nEnter no. of columns:- ");
scanf("%d",&cols);
int m1[rows][cols],m2[cols][rows];
printf("\nEnter elements of matrix:- ");
for(i=0;i<rows;i++)
for(j=0;j<cols;j++)
scanf("%d",&m1[i][j]);

for(i=0;i<rows;i++)
for(j=0;j<cols;j++)
m2[j][i]=m1[i][j];

printf("\nAfter transpose:-\n ");
for(i=0;i<cols;i++)
{
for(j=0;j<rows;j++)
printf("%d ",m2[i][j]);
printf("\n");
}

return 0;
}

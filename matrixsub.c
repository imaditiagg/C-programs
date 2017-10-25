#include<stdio.h>
int main()
{
int rows,cols,i,j;
printf("Enter no. of rows:- ");
scanf("%d",&rows);
printf("\nEnter no. of columns:- ");
scanf("%d",&cols);
int m1[rows][cols],m2[rows][cols],m3[rows][cols];
printf("\nEnter elements of matrix 1:- ");
for(i=0;i<rows;i++)
for(j=0;j<cols;j++)
scanf("%d",&m1[i][j]);
printf("\nEnter elements of matrix 2:- ");

for(i=0;i<rows;i++)
for(j=0;j<cols;j++)
scanf("%d",&m2[i][j]);

for(i=0;i<rows;i++)
for(j=0;j<cols;j++)
m3[i][j]=m1[i][j]-m2[i][j];

printf("\nAfter subtraction :\n ");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
printf("%d ",m3[i][j]);
printf("\n");
}
return 0;


}

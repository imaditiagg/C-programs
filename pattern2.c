#include<stdio.h>

int main()
{

int n,i,j,k;
printf("Enter no. of rows:- ");
scanf("%d", &n);
printf("\nPattern is :- \n");

for(i=1;i<=n;i++)  //for rows
{
    for(j=1; j<=(n-i);j++) //for space

     {
       printf(" ");


     }
     for(k=1;k<=i;k++)
     {

         printf("*");
     }

    printf("\n");
    }

    return 0;
    }



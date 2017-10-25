#include<stdio.h>
int main()
{
    printf("Enter a number :- ");
    int n,i;
    scanf("%d",&n);
    printf("\nThe first 10 mulitples of %d are :- " , n);
    for( i=1;i<=10;i++)
        printf("\n%d",i*n);

        return 0;
}

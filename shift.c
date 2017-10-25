#include<stdio.h>
int main()
{
    int x,y;
    printf("\n\n\t\t Enter a number x:- ");
    scanf("%d",&x);
    y=x;
    x=x>>2;
    printf("\n\n\t\t After right shift(2 bits), x is % d",x);  //involves division
    y=y<<2;
    printf("\n\n\t\t And After left shift(2 bits),x is %d",y); //involves multiplication
    return 0;
}

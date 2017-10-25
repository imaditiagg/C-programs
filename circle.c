#include<stdio.h>

float area( float radius)
{
float pi=3.14;

float a= pi*radius*radius;
return a;

}
float perimeter( float radius)
{
float pi=3.14;

float p= 2*pi*radius;
return p;

}




int main()
{

float radius;
printf("Enter radius:- ");
scanf("%f",&radius);
float a;
a= area(radius);

printf("Area :- %f ",a);

float p;
p= perimeter(radius);
printf("Perimeter :- %f ",a);

return 0;

}

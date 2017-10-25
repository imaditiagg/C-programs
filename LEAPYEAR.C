#include<stdio.h>
#include<conio.h>
int main()
{

  int year;
  //clrscr();
  printf("\n\n\t\t Enter an  year :- ");
  scanf("%d", &year);
  if(year%4 ==0)
  {
  if(year % 100 ==0 ) //means century year
  {
  if(year%400 ==0) //should be a multiple of 400
  printf("\n\n\t\t It is a leap year");
  else
  printf("\n\n\t\t It is not a leap year");
  }
  else
  printf("\n\n\t\t It is a leap year");
  }
  else
  printf("\n\n\t\t It is not a leap year");
  return 0;

}

#include<stdio.h>

int main() {

   short svar=1;
   int ivar = 10;
   char cvar = 'a';
   float fvar = 10.10;
   double dvar= 10.00011;
   long double lvar= 10.00000111;

   printf("\n\n\t\t Size of short is %d", sizeof(svar));
   printf("\n\n\t\t Size of int is %d", sizeof(ivar));
   printf("\n\n\t\t Size of char is %d", sizeof(cvar));
   printf("\n\n\t\t Size of float is %d", sizeof(fvar));
   printf("\n\n\t\t Size of double is %d", sizeof(dvar));
   printf("\n\n\t\t Size of long double is %d", sizeof(lvar));
   return 0;
}

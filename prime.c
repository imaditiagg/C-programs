#include<stdio.h>
int main()
{
int s,e,prime=1,i;

printf("Enter range(+ve) :- ");
scanf("%d",&s);
scanf("%d",&e);
printf("\nPrime numbers between %d and %d : ",s,e);
for( ; s<=e;s++)
{
    if(s==1)     //since 1 is neither prime nor composite
        prime=0;
    if(s==2)
        prime=1;

for( i=2;i<s  ;i++)
{
prime=1;
if(s%i == 0)
{
prime=0;
break;
}
}
if(prime!=0)
{
printf("\n%d",s);
}

}
return 0;

}

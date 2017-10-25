#include<stdio.h>
int main()
{
int s,e,n,prime=1,i;

printf("Enter number :- ");
scanf("%d",&n);
s=1;
e=n;
printf("\nPrime factors of %d : ",n);

//firstly find prime numbers in that range
for( ; s<=e;s++)
{
    if(s==1 || s==2 )     //since 1 is always a factor
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
if(n%s == 0)    //now check if it divides the entered no.
    printf("\n%d",s);
}

}
return 0;

}




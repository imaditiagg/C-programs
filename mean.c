
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,sum=0,sum1=0;
    int a[100];
    float var,sd;

    printf("Enter n :- ");

    scanf("%d",&n);


    printf("\nEnter the numbers :- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }

        float mean= sum/n;
        printf("\nMean : %f ",mean);

        for(j=0;j<n;j++)
        {
            a[j]*=a[j];
            sum1+=a[j];
        }

        var= (sum1/n) - (mean*mean);

        printf("\nVariance : %f",var);

        sd= sqrt(var);

        printf("\nStandard deviation : %f",sd);

        return 0;
}

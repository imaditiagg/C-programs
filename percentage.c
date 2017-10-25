#include<stdio.h>
int main()
{
    int n,i;
    float total=0.0;
    printf("\n\n\t\t Enter no. of subjects:- ");
    scanf("%d",&n);
    int arr[n];
    printf("\n\n\t\t Enter marks:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        total=total+arr[i];
    }

    printf("\n\n\t\t The total of marks is %f ",total);
    float percentage;
    percentage=(total/n);
    printf("\n\n\t\t Percentage is %f ",percentage);
    return 0;

}

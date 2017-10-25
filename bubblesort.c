#include<stdio.h>
void bubble_sort(int a[],int n)
{
    int times,j,temp=0;
        ///Bubble Sort
    for(times=1;times<n;times++)
    {

        ///Iteration from 0 to n-times-1 => Pairwise swapping
        for( j=0;j<=n-1-times;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){

    int n,j,i ;
    printf("Enter n :- ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter elements :- ");
    for(j=0;j<n;j++)
    {
    scanf("%d",&a[i]);
    }
    bubble_sort(a,n);
    printf("\nArray after sorting :- ");
    for( i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
    return 0;
}


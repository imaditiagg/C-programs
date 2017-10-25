#include<stdio.h>
struct book
{

char title[20];
int pages;
float cost;



};

int main()
{
int i,j;
struct book b[10];
int n;
printf("Enter n : ");
scanf("%d",&n);

for(i=0;i<n;i++)   // Taking input
{
printf("\nEnter details of book %d",i+1);
scanf("%s",&b[i].title);
scanf("%d",&b[i].pages);
scanf("%f",&b[i].cost);

}
struct book temp;
for(i=0;i<n-1;i++)  //Bubble sort on the basis of cost
    {
        for(j=0;j<n-i-1;j++)
        {
            if(b[j].cost > b[j+1].cost)
            {

                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }

        }
    }
for(j=0;j<n;j++)  //display
{
printf("%s ",b[j].title);
printf("%d ",b[j].pages);
printf("%f ",b[j].cost);
printf("\n");
}

return 0;



}







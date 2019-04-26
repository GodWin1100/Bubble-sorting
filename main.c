#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp,n,m,a[10];
    //Entering number of elements in array
    printf("\nEnter the number of element of array");
    scanf("%d",&n);
    //Entering elements in array
    printf("\nEnter elements in array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    //displaying elements in array
    printf("main array");
        for(j=0;j<n;j++)
        {
        printf("\t%d",a[j]);
        }
    printf("\n");
    //sorting elements in array step by step and displaying every step
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        printf("changing of j");
        for(m=0;m<n;m++)
            {
            printf("\t%d",a[m]);
            }
        printf("\n");
        }
    for(j=0;j<n;j++)
        {
        printf("\t%d",a[j]);
        }
    printf("\n");
    }
    printf("\nLargest %d",a[n-1]);
    printf("\n second %d",a[n-2]);
    return 0;
}

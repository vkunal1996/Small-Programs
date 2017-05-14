#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void selectionsort(int a[] ,int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void bubblesort(int a[],int size)
{
    int temp,i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;j++)
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
void insertionsort(int a[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {
                if(a[j+i]<a[j])
                {
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                }
                else
                {
                    break;
                }
        }
    }
}
int main()
{
    int a[100],n,i,choice;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter your Choice ");
    printf("\n 1.) Selection Sort 2.)Bubble Sort 3.) Insertion Sort ");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                selectionsort(a,n);
            break;
            case 2:
                bubblesort(a,n);
                break;
            case 3:
                insertionsort(a,n);
                break;
        }
    printf("Array after Sorting is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

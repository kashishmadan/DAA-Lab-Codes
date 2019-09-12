#include<stdio.h>
int partition(int A[],int low,int high)
{
    int i=low,j=high,temp,pivot;
    pivot=A[low];
    while(i<j)
    {
        do
        {
            i++;
        } while(A[i]<pivot);
        do
        {
            j++;
        } while(A[j]>pivot);
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
        temp=A[low];
        A[low]=A[j];
        A[j]=temp;
        return j;
}
void QuickSort(int A[],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition(A,low,high);
        QuickSort(A,low,j);
        QuickSort(A,j+1,high);
    }
}
int main()
{
    int n,i;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int A[n];
    printf("\nEnter Array elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    QuickSort(A,0,n);
    printf("\nAfter performing Quick sort, the array elements are:\n ");
    for(i=0;i<n;i++)
        printf("A[%d]: %d\n",i,A[i]);
}

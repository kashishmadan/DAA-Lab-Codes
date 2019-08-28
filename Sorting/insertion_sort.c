#include<stdio.h>
void main()
{
    int n,i,j,min,temp,index;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n Sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}

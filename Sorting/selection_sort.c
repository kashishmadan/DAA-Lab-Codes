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
        for(j=i;j<n;j++)
        {
            min=arr[i];
            index=-1;
            if(arr[j]<min)
            {
                min=arr[j];
                index=j;
            }
            if(index!=-1)
            {
                temp=arr[i];
                arr[i]=min;
                arr[index]=temp;
            }
        }
    }
    printf("\n Sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}

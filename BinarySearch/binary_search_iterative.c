#include<stdio.h>
int main()
{
    int n,num,index=-1,first,last,mid,i,size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter sorted elements \n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to be searched: ");
    scanf("%d",&num);
    first=0;
    last=size-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]==num)
        {
            index=mid;
            break;
        }
        else if(num<arr[mid])
            last=mid-1;
        else
            first=mid+1;
    }
    if(index==-1)
        printf("Element not found!\n");
    else
    printf("Using iteration, the index is: %d\n",index);
    return 0;
}

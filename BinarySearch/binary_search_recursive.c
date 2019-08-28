#include<stdio.h>
int bsearch(int arr[],int num, int first, int last);
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
    index=bsearch(arr,num,first,last);
    if(index==-1)
        printf("Element not found!\n");
    else
    printf("Using recursive function, the index is: %d\n",index);
    return 0;
}
int bsearch(int arr[],int num, int first, int last)
{
    if(first>last)
        return -1;
    int mid=(first+last)/2;
    if(arr[mid]==num)
        return mid;
    else if(arr[mid]>num)
        last=mid-1;
    else
        first=mid+1;
    return bsearch(arr,num,first,last);
}

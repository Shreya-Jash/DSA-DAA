#include<stdio.h>
int binarySearch(int arr[],int beg ,int end,int val)
{
    int mid;
    if(end>=beg)
    {
            int mid=(beg+end)/2;
    
        if (arr[mid]==val)
        {
            return mid+1;
        }
        else if (arr[mid]<val)
        {
            return binarySearch(arr,mid+1,end,val);
        }
        else{
             return binarySearch(arr,beg,mid-1,val);
        }
    }
    return -1;
    
}
int main()
{
   
    int i,n,val;
    printf("Enter the size of array- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array in sorted way- ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // int low=arr[0];
    // int high=arr[n-1];
    printf("The entered array elements are- ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter an element to search- ");
    scanf("%d",&val);
    int store=binarySearch(arr,0,n-1,val);

    if(store==-1)
    {
        printf("element not present");
    }
    else{
        printf("Element present at index %d",store);
    }
    
}
#include<stdio.h>
/* Best Case=O(nlogn)
    worst case=O(n^2)
*/
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low+1,j=high;
    int temp;
    do
    {
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    } while (i<j);
    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
    
}
int quickSort(int arr[],int low,int high)
{
    int pivot;
    if(low<high)
    {
        pivot= partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);

    }
    return 0;
}

int main()
{
    int i,n;
    int arr[25];
    printf("Enter the size of an array list- ");
    scanf("%d",&n);
    printf("Enter the elements of array- ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements you entered are- ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    int low=0;
    int high=n-1;
    quickSort(arr,low,high);
    printf("\nArray list after sorting- ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]); 
    }
    return 0;
}

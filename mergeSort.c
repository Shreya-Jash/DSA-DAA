#include<stdio.h>
int merge(int arr[],int low,int mid,int high)
{
    int temp[40];
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            temp[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }
    for(i=low;i<=high;i++)
    {
        arr[i]=temp[i];
    }
}
int mergeSort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
        
}

int main()
{
    int arr[]={3,1,8,4,5};
    int n=5,i;
    mergeSort(arr,0,n-1);
    printf("Sorted array- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}
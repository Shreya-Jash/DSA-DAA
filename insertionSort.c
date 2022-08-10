#include<stdio.h>

/*Time Complexity-
    Best case-O(n)
    worst case-O(n^2)
    average case-

    Checks the element from begining if the 1st element is bigger than the 2nd then it is swapped. 

 */


int insertionSort(int arr[],int n)   
{
   for (int j = 1; j < n; j++)
   {
        int key=arr[j];
        int i=j-1;
        while (i>= 0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
   }
   
}

int main()
{
    int arr[100];
    int n;
    printf("Enter the size of array- ");
    scanf("%d",&n);
    printf("Enter a partially sorted array- ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array entered - ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    insertionSort(arr,n);
    printf("\nThe array after sorting- ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
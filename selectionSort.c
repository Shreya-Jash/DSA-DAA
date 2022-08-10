#include<stdio.h>

/*Selecting the minimum element in each run and placing it at the correct position by swapping;
    Best case-O(n^2)
    Average Case-
    Worst Case-O(n^2)

*/

int selectionSort(int arr[],int n)
{
    int temp;
    for (int i = 0; i < n; i++)  
    {
        for (int j = i+1; j < n; j++)    
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;                        
            }
        }
        
    }
    
}


int main()
{

    int arr[100];
    int i,n;
    printf ("Enter the size of array- ");
    scanf("%d",&n);
    printf("Enter the array elements - ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array elements are - ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    selectionSort(arr,n);
    printf("\nThe sorted array = ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    


    return 0;
}

#include<stdio.h>

/*Best case=O(n)
    Worst case=O(n^2)
*/

int bubbleSort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)     //why j=n-i-1???
        {
            if (arr[j]>arr[j+1])
            {
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }   
        
    }

}
int main()
{
    int arr[100];
    int i,n;
    printf("Enter the size of array- ");
    scanf("%d",&n);
    printf("Enter the elements of array- ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The entered array is- ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    bubbleSort(arr,n);
    printf("\nThe sorted array = ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}
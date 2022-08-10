#include<stdio.h>
int linearSearch(int arr[],int n,int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==val)
        {
            return i+1; //since we are staring with array index 0 we increase the array element index by adding 1
        }
        
    }
    
    return -1;
}
 int main()
 {
    int arr[]={1,9,3,4,5,99,7,8};
    int n,i,val;
    n=sizeof(arr)/sizeof(arr[0]);
    printf("The entered array elements are- ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n Enter the element to search- ");
    scanf("%d",&val);
    int store = linearSearch(arr,n,val);
        if (store == -1)
        {
            printf("The element is not present ");
        }
     else
        {
            printf("The element is present at index- %d",store);
        } 
    
    return 0;
    
 }
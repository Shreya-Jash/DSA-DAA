#include<stdio.h>  
void mSort(int a[],int i,int j);

void merge(int a[],int low,int mid,int high);

int main()  
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  mSort(a,0,n-1);
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
void mSort(int a[],int i,int j) 
{
  int mid;
  if(i<j)
  {
    mid=(i+j)/2; 
    mSort(a,i,mid);      
    mSort(a,mid+1,j);    
    merge(a,i,mid,j);    
  }
}
void merge(int a[],int low,int mid,int high) 
{
  int temp[50];  
  int i,j,k;
  i=low;    
  j=mid+1;    
  k=low;
  while(i<=mid && j<=high)    
  {
    if(a[i]<a[j]){ 
        temp[k]=a[i];
        k++;
        i++;
    } 
    else
    {  temp[k]=a[j]; 
      k++; 
      j++; 
    } 
  }
  while(i<=mid) 
  {
     temp[k]=a[i]; 
     k++; 
     i++; 
  }
   
  while(j<=high)
  {
    temp[k]=a[j];
    k++;
    j++;
  }  
   for(i=low;i<=high;i++)

    a[i]=temp[i];
 }
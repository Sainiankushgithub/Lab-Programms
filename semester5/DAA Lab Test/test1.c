#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void Merge(int array[],int arr1[],int arr2[],int n1,int n2)
{
  int i=0,j=0,k=0;
  while(i<n1 &&j<n2)
  {
    if(arr1[i]<arr2[j])
    {
      array[k++]=arr1[i++];
    }
    else
    {
      array[k++]=arr2[j++];
    }
  }
  while(i<n1)
  {
    array[k++]=arr1[i++];
  }
  while(j<n2)
  {
    array[k++]=arr2[j++];
  }
}
int partition(int arr[],int l,int h)
{
  int i=l-1;
  int j=h+1;
  int pivot=arr[l];
  while(1)
  {
    do{
      i++;
    }while(arr[i]<pivot);
    do{
      j--;
    }while(arr[j]>pivot);
    if(i>=j)
    {
      return i;
    }
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  }

}
void sort(int arr[],int l,int h)
{
  if(l<h)
  {
    int p=partition(arr,l,h);
    sort(arr,l,p);
    sort(arr,p+1,h);
  }
}
int main()
{
  int n1,n2;
  printf("Enter the total size of an array1 where you are going store element in ascending order\n");
  scanf("%d",&n1);
  printf("Size for descending\n");
  scanf("%d",&n2);
  int arr1[n1],arr2[n2];
  printf("Enter the elements in Ascending order\n");
  for(int i=0;i<n1;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("Enter the element in dscending order\n");
  for(int i=0;i<n2;i++)
  {
    scanf("%d",&arr2[i]);
  }
  printf("Displaying the array1 and array2\n");
  display(arr1,n1);
  display(arr2,n2);
  sort(arr2,0,n2-1);
  printf("Displaying after sorting\n");
  // display(arr2,n2);
  int array[n1+n2];
  Merge(array,arr1,arr2,n1,n2);
  display(array,n1+n2);
  return 0;
}
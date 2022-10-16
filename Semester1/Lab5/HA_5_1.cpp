// WAP TO SWAP THE LAST ELEMENT WITH THE FIRST ELEMENT AND SECOND LAST ELEMENT WITH SECOND ONE AND SO ON.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int size;
    int temp;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the numbers of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the elements before swapping\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    printf("\n");
    printf("==========================================================\n");
    for(int i=0;i<size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    printf("Displaying the elements before swapping\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
   return 0;
}
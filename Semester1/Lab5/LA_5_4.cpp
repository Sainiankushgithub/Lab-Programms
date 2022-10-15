// WAP TO SWAP THE PAIR OF ELEMENTS STARTING FROM THE BEGNING
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
    printf("Your entered elememts before swapping\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    printf("Elements after swapping\n");
    for(int i=0;i<size;i+=2)
    {
         temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
return 0;
}
// WAP TO FIND OUT THE SECOND LARGEST ELEMENT STORED IN AN ARRAY OF 20 INTEGER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20];
    int size;
    int sec_larg;
    int max=INT_MIN;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the number of an elemets\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your entered elements\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            sec_larg=max;
            max=arr[i];
        }
    }
    printf("Second largest element is %d",sec_larg);
return 0;
}
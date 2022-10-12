// WAP TO FIND OUT THE LARGEST ELEMENT STORED IN AN ARRAY
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
   int max= INT_MIN;
   int min= INT_MAX;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the number of an elements\n");
    for(int i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the elements\n");
    for(int i=1;i<=size;i++)
    {
        printf("%d\n",arr[i]);
    }
    for(int i=1;i<=size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum number is %d\n",max);
    printf("Minimum number is %d\n",min);
return 0;
}
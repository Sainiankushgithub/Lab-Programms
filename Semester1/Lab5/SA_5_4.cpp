// WAP TO DISPLAY ELEMENTS IN ASCENDING ORDER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the number of an elements\n");
    for(int i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=size;i++)
    {
        for(int j=i+1;j<=size;j++)
        {
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
        }
    }
    printf("Displaying the array in ascending order\n");
    for(int i=1;i<=size;i++)
    {
        printf("%d\n",arr[i]);
    }
return 0;
}
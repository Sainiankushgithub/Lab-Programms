// WAP TO DISPLAY THE ARRAY ELEMENTS IN REVERSE ORDER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the numbers of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the nunber in reverse order\n");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
return 0;
}
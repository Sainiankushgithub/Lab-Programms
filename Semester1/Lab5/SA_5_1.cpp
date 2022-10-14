// WAP TO CREATE AN THAT CAN STORE MAX. 50 INTEGER. AND DISPLAY THE CONTENT OF AN ARRAY
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50];
    int size;
    printf("Enter the size upto you want to display the elements\n");
    scanf("%d",&size);
    for(int i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the elements\n");
    for(int i=1;i<=size;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
return 0;
}
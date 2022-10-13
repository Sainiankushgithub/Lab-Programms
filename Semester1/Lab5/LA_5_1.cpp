// WAP TO INPUT 10 INTEGER INTOP AN ARRAY OF SIZE 10. PRINT ALL ELEMENTS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    printf("Enter the number of an elememts\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the number of an elements\n");
    for(int i=0;i<10;i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
return 0;
}
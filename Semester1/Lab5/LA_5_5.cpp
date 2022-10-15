// WAP TO ARRANGE THE NUMBERS STORED IN THE ARRAY SO THAT IT WILL DISPLAY FIRST ALL ODD NUMBER THEN EVEN NUMBERS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the number of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the odd numbers\n");
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d\n",arr[i]);
        }
    }
    printf("Displaying the even numbers\n");
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\n",arr[i]);
        }
    }
return 0;
}
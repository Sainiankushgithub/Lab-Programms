// WAP TO FIND OUT THE SUM OF THE NUMBER STOIRED IN AN ARRAY OF INTEGER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int sum=0;
    printf("Enter the size of an array that how many elements do you want to stored in an array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the number of an elements\n");
    for(int i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the sum according to number elements that you have stored\n");
    for(int i=1;i<=size;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of the elements is : %d",sum);
return 0;
}
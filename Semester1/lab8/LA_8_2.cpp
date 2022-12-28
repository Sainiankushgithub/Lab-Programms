//  WAP to compute the sum of all elements in an array using pointer
#include<bits/stdc++.h>
using namespace std;
int sumarray(int *arr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+*(arr+i);
    }
    return sum;
}
int main()
{
    int size;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    int *arr;
    // arr=(int *)malloc(size*sizeof(int));
    printf("Enter the numbers of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
    sumarray(arr,size);
    printf("Sum of the array elements are : %d\n",sumarray(arr,size));
return 0;
}
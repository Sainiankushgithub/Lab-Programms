// WAP TO FIND OUT THE LARGEST EVEN INTEGER STORED IN THE ARRAY OF N INTEGER.N IS THE USER INPUT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int max=INT_MIN;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number of an even elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
    printf("Even maximum number is %d",max);
return 0;
} 
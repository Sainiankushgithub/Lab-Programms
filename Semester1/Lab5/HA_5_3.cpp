// WAP TO FIND THE MEDIAN OF THE LIST OF NUMBERS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int temp;
    int size;
    int median;
    printf("Ente the size of an array\n");
    scanf("%d",&size);
    printf("Enter the number of elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the elements\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    printf("\n");
    printf("Displaying the elements in ascending order\n");
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    printf("\n");
    if(size%2==0)
    {
       median = (arr[(size/2)-1]+arr[(size/2)])/2;
        printf("Median is %d",median);
    }
    else
    {
        median=(arr[size/2]);
        printf("Median is %d",median);
    }
return 0;
}
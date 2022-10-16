// WAP TO FIND THE STANDARAD DEVIATIOIN OF THE NUMBER OF THE LIST
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int arr[100];
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the  number of an elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&size);
    }
    printf("Displaying the elements\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    printf("\n");
    float sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    float mean=sum/2;
    printf("Mean is %.2f\n",mean);
    float sum1=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i]-mean*arr[i]-mean;
    }
    float sd=sqrt(sum/size);
    printf("Standarad deviation is %.2f\n",sd);
return 0;
}
// CALUCALTE THE SUM OF A DIGIT OF A GIVEN NUMBER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int sum=0;
    printf("Enter the size upto you want to find the sum of the given number entered by you\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the number of an elements\n");
    for(int i=1;i<=size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Displaying the sum of the given numbers\n");
    for(int i=1;i<=size;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of the given number is %d ",sum);
return 0;
}
// WAP TO PRINT ALL EVEN AND NUMBER SEPARATLY WITHIN IN A GIVEN RANGE. THE RANGE IS INPUT THROUGH USER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start,end;
    printf("Enter the starting value from where you want to start you series\n");
    scanf("%d",&start);
    printf("Enter the end value for the even and odd number\n");
    scanf("%d",&end);
    printf("Displaying the even number : ");
    for(int i=start;i<=end;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("Displaying the odd number : ");
    for(int i=start;i<=end;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
return 0;
}
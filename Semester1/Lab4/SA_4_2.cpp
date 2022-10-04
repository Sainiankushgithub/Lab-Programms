// WAP TO PRINT ALL NUMBER WITHIN IN A GIVEN RANGE . THE RANGE IS GIVEN BY USER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int range;
    printf("Enter the range upto you want to display the number\n");
    scanf("%d",&range);
    printf("Dispalying the number upto your range\n");
    for(int i=1;i<=range;i++)
    {
        printf("%d\t",i);
    }
return 0;
}
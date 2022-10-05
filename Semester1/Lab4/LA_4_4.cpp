// WAP TO PRINT THE SERIE AS 1 3 7 5 ......... N
// LOGIC--> {0*2+1}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    int n;
    printf("Enter the number upto where you want take this series\n");
    scanf("%d",&n);
    printf("Displaying the series as :\n");
    for(int i=0;i<n;i++)
    {
        sum=sum*2+1;
        printf("%d ",sum);
    }
return 0;
}
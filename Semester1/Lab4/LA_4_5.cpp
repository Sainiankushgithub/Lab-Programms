// WAP TO PRINT SERIES AS 1 1 2 3 5 8 13 . . . . . . N WHERE N IS GIVEN BY THE USER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=1;
    int b=1;
    int next_term=a+b;
    int n;
    printf("Enter the size upto where you want to take this series as :\n 1 1 3 5 8 13 . . . . . n\n");
    scanf("%d",&n);
    printf(" Displaying the series as : %d %d ",a,b);
    for(int i=3;i<=n;i++)
    {
        printf("%d ",next_term);
        a=b;
        b=next_term;
        next_term=a+b;
    }
return 0;
}
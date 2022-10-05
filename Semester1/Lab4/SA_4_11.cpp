// WAP TO PRINT THE PATTERN LIKE THIS 
//      *
//      *  *
//      *  *  *
//      *  *  *  *
//      *  *  *  *  * 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}
      
    
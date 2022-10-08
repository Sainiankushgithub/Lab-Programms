// WAP TO PRINT THE FOLLOWING PATTERN FOR N ROWS. EX FOR N=6 ROWS
/*              0
                1   0
                0   1   0
                1   0   1   0
                0   1   0   1   0
                1   0   1   0   1   0
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=6;i>=1;i--)
    {
        for(int j=i;j<=6;j++)
        {
            printf("%d  ",j%2);
        }
        printf("\n");
    }
return 0;
}
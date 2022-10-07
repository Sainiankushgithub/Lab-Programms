// WAP TIO PRINT THE FOLLOWING PATTERN FOR N ROWS. EX. FOR N=6 ROWS
/*      1
        0  1
        1  0  1
        0  1  0  1
        1  0  1  0  1
        0  1  0  1  0  1
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=6;i++)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%d  ",j%2);
        }
        printf("\n");
    }
return 0;
}
// WAP TO PRINT THE FOLLOWING PATTERN FOR N ROWS. EX. FOR N=5 ROWS
/*         A
           B   A
           C   B   A
           D   C   B   A
           E   D   C   B   A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%c  ",64+j);
        }
        printf("\n");
    }
return 0;
}
//  WAP TO PRINT FOLLOWING PATTERN FOR N NUMBER OF ROWS.EX.N=5
/*             *
             *   *
           *   *    *
         *    *    *    *
       *   *    *     *    * 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    for(int i=1;i<=5;i++)
    {
        for(k=5;k>=i;k--)
        printf(" ");
        for(int j=1;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
return 0;
}
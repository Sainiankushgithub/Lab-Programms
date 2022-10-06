// WAP TO PRINT THE FOLLOWING PATTERN FOR N ROWS. EX.N=5 ROWS
/*            1 
              2   1
              1   2   3
              4   3   2   1
              1   2   3   4   5
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i&1)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d  ",j);
            }
            printf("\n");
        }
        else{
            for(int j=i;j>=1;j--)
            {
                printf("%d  ",j);
            }
            printf("\n");
        }
    }
return 0;
}
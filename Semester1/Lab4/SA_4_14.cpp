// WAP TIO PRINT THE FOLLOWING PATTERN FOR N ROWS. EX. FOR N=4 ROWS
/*        1
       1  2  1
    1  2  3  2  1  
 1  2  3  4  3  2  1    
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int k=4;k>=i;k--)
        {
        printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
return 0;
}
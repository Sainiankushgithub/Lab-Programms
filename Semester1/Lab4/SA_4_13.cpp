// WAP TO PRINT THE GIVEM PATTERN
//    A
//    A  B
//    A  B  C
//    A  B  C  D
//    A  B  C  D  E
#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c  ",64+j);
        }
        printf("\n");
    }
return 0;
}
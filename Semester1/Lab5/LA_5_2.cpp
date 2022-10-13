// WAP to store max 100 number into an array print all  even number
#include<bits/stdc++.h>
using namespace std;
#define n 100
int main()
{
    printf("Displaying the all even number stored upto 100\n");
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            printf("%d",i);
            printf("\n");
        }
    }
return 0;
}
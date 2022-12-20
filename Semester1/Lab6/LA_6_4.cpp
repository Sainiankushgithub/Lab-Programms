// WAP to calculate xy by writing a function(say POWER) for it.
#include<bits/stdc++.h>
using namespace std;
int power(int x,int y)
{
    int mult=1;
    for(int i=0;i<y;i++)
    {
        mult=mult*x; 
    }
    return mult;
}
int main()
{
    int x,y;
    printf("Enter the base\n");
    scanf("%d",&x);
    printf("Enter the power of the base\n");
    scanf("%d",&y);
    power(x,y);
    printf("Power of x^y: %d",power(x,y));
return 0;
}
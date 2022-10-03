// WAP TO INPUT ANY TWO INTEGER DISTINCT AND DISPLAY THE GREATER OF THE TWO
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    if(a>b)
    {
        printf("First number--> %d is greater than the second number--> %d\n",a,b);
    }
    else{
        printf("second number--> %d is greater than the first number--> %d\n",b,a);
    }
    return 0;
}
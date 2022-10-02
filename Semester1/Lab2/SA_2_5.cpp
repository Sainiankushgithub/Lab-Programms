// WAP TO SWAP TO INTEGER USING THIRD VARIABLE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    printf("Enter the A value\n");
    scanf("%d",&a);
    printf("Enter the B value \n");
    scanf("%d",&b);
    printf("Displaying the value before swapping\n");
    printf("A value =%d \nB value =%d",a,b);
    printf("\n");
    printf("Displaying the values after swapping\n");
    int  temp;
    temp=a;
    a=b;
    b=temp;
    printf("A value =%d \nB value =%d",a,b);
    return 0;
}
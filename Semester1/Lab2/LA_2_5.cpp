// WAP TO SWAP TO NUMBER WITHOUT USING THE THIRD VARIABLE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("a and b before swapping\n a=%d \n b=%d\n",a,b);
    a=a+b-a;
    b=a+b-a;
    printf("a and b after swapping\n a=%d \n b=%d\n",a,b);
return 0;
}
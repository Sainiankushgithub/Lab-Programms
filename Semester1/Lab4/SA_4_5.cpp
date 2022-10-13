// WAP TO CALCULATE THE GCP AND HCF OF THE TWO NUMBER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1;
    int num2;
    int gcd;
    printf("Enter the number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    for(int i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
             gcd=i;
        }
    }
    printf("HCF/GCD of the two number is %d\n",gcd);
         return 0;
}
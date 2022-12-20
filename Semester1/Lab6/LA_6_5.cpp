/*WAP to generate all the prime numbers between 1 and n by using a user defined function (say
isPRIME) to be used for prime number testing, where n is a value supplied by the user*/
#include<bits/stdc++.h>
using namespace std;
int checkprime(int n)
{
    if(n==1)
    return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
void isprime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(checkprime(i))
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int n;
    printf("Enter the number upto where you want to print the series\n");
    scanf("%d",&n);
    checkprime(n);
    printf("Displaying the series of prime numbers\n");
    isprime(n);
return 0;
}
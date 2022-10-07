// WAP TO CHECK WHETHER NUMBER IS PRIME OR NOT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int count=0;
    printf("Enter the  positive number to check whether entered number is prime or not?\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Entered number %d is a prime number \n",num);
    }
    else
    {
        printf("Entered number %d is not a prime number \n",num);
    }

return 0;
}
/*WAP to test whether a number n is palindrome number or not*/
#include<bits/stdc++.h>
using namespace std;
/*void palindrome(int n)
{
    int temp=n;
    int sum=0;
    while(n>0)
    {
        int r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Entered number %d is palindrome\n",temp);
    }
    else
    {
        {
        printf("Entered number %d is not palindrome\n",temp);
    }
    }
}*/
int palindrome(int n)
{
    int sum=0;
    while(n>0)
    {
        int r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number to check given number is palindrome or not\n");
    scanf("%d",&n);
    int temp=n;
    palindrome(n);
    if(palindrome(n)==temp)
    {
    printf("Entered number %d is palindrome\n",temp);
    }
    else
    {
        printf("Entered number %d is not palindrome\n",temp);
    }
return 0;
}
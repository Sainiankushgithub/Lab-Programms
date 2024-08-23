/*Wap to find the factorial of a number */
#include<stdio.h>
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter the number whose factorial you want to find\n");
    scanf("%d",&n);
    factorial(n);
    printf("Factorial of your number is %d",factorial(n));
}
/*Wap to check whether a given number is prime or not*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number to check whether given number is prime or not\n");
    scanf("%d",&a);
    int count=0;
    for(int i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("Entered number %d is prime number\n",a);
    }
    else
    {
        printf("Entered number %d is not prime number\n",a);
    }
    return 0;
}
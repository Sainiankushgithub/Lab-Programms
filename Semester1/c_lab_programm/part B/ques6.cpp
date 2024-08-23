/*Wap to reverse a number and check whether the number is palindrome or not*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int sum=0;
    int temp=n;
    while(n!=0)
    {
        int r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("Entered number %d is palindrome\n",temp);
    }
    else
    {
        printf("Entered number %d is not palindrome\n",temp);
    }
    return 0;
}
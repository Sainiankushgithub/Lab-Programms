/*Wap to find the sum of digit of a n*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {
        int r=n%10;
        sum+=r;
        n=n/10;
    }
    printf("Sum of digit of a number is %d",sum);
    return 0;
}
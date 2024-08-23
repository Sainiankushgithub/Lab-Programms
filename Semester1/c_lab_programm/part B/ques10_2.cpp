// WAP TO PRINT N FIBBONACCI SERIES USING FUNCTION
#include<stdio.h>
int fibbonacci(int n);
int main()
{
    int n;
    printf("Enter the number upto where you want to print the fibbonacci series\n");
    scanf("%d",&n);
    fibbonacci(n);
    int c=0;
    for(int i=0;i<n;i++)
    {
        printf("%d ",fibbonacci(i));
        c++;
    }
    return 0;
}
int fibbonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    return fibbonacci(n-1)+fibbonacci(n-2);
}
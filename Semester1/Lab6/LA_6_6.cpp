/*A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0
and 1. Subsequent terms are found by adding the preceding two terms in the sequence (Fi=Fi1+Fi-2). WAP to generate the first n terms of the sequence by writing a suitable user defined
function (say fib) to be used to get nth term Fibonacci value.*/
#include<bits/stdc++.h>
using namespace std;
void fibbonacci(int *a,int *b,int n)
{
    int next;
    for(int i=3;i<=n;i++)
    {
        next=*a+*b;
        printf("%d\n",next);
        *a=*b;
        *b=next;
    }
}
int main()
{
    int a=0;
    int b=1;
    int n;
    printf("Enter the value for how much seris you want to generate\n");
    scanf("%d",&n);
    printf("Displaying the Fibbonacci series\n");
    printf("%d\n%d\n",a,b);
    fibbonacci(&a,&b,n);
return 0;
}
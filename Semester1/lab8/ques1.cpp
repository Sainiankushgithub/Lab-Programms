// WAP to add two numbers using call by reference.
#include<bits/stdc++.h>
using namespace std;
long addtwonum(long *,long *);
int main()
{
    long num1,num2;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    addtwonum(&num1,&num2);
    printf("Addition of two number is %d",addtwonum(&num1,&num2));
return 0;
}
long addtwonum(long *a,long *b)
{
    long add=*a+*b;
    return add;
}
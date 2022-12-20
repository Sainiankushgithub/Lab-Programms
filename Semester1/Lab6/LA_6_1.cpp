/*WAP to swap the values of two variables by using a suitable user defined function (say
SWAP) for it.*/
#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;                       /*THESE ARE THE FORMAL PARAMETERS*/
    *b=temp;
    printf("Elements after swapping\n");
    printf("a=%d\n b=%d\n",*a,*b);
}
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("Elements before swapping\n");
    printf("a=%d\n b=%d\n",a,b);              /*THESE ARE THE ACTUAL PARAMETERS*/
    swap(&a,&b);
    // printf("Elements after swapping\n");
    // printf("a=%d\n b=%d\n",a,b);
return 0;
}
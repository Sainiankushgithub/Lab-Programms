/*WAP to swap three numbers in cyclic order using Call by Reference. In other words, WAP that takes three variable (a, b, c) in as separate 
parameters and rotates the values stored so that value a goes to be, b, to c and c to a.*/
#include<bits/stdc++.h>
using namespace std;
void swap(int *,int *,int *);
int main()
{
    int a,b,c;
    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);
    printf("Enter the value of c \n");
    scanf("%d",&c);
    printf("Value of a ,b and c before swapping\n");
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    swap(&a,&b,&c);
return 0;
}
void swap(int *a,int *b,int *c)
{
    int temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;
    printf("Value of a ,b and c after swapping\n");
    printf("a=%d\nb=%d\nc=%d\n",*a,*b,*c);
}
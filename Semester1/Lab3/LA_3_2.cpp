// WAP TO INPUT ANY THREE INTEGER DISTINCT AND DISPLAY THE GREATER OF THE THREE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("Enter the third number\n");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("First number that you have entered %d \nIs greater than the third number %d \nand the second number %d\n",a,c,b);
        }
    }
    else if(b>c)
    {
        printf("Second number that you have entered %d \nIs greater than the first number %d \nand the third number %d\n",b,a,c);
    }
    else 
    {
        printf("third number that you have entered %d \nIs greater than the first number %d \nand the second number %d\n",c,a,b);  
    }
    return 0;
}
// WAP TO CHECK OUT ENTERED NUMBER IS A STRONG NUMBER OR NOT?
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num;
    int sum=0;
    int fact;
    printf("Enter the number to checkout whether the number is strong or not\n");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        int r=num%10;
        fact=1;
        for(int i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("Entered number %d is a strong number\n",temp);
    }
    else
    {
         printf("Entered number %d is not a strong number\n",temp);
    }
return 0;
}
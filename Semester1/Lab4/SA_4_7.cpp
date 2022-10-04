// WAP TO CHECK WHETHER NUMBER IS PRIME OR NOT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int sum=0;
    printf("Enter the number to check whether entered number is perfect or not?\n");
    scanf("%d",&num);
    int temp =num;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(temp==sum)
    {
        printf("Entered number %d is a perfect number\n",temp);
    }
    else
    {
        printf("Entered number %d is not a perfect number\n",temp);
    }
return 0;
}
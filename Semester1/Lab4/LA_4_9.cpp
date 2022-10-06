// WAP TO CHEKC WHETHER ENTERED INTEGER  NUMBER IS ARMSTRONG OR NOT?
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int sum=0;
    printf("Enter the number to check whether entered number is armstrong or not?\n");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        int r=num%10;
        int R=r*r*r;
        sum+=R;
        num=num/10;        
    }
    if(temp==sum)
    {
        printf("Entered number %d is an Armstromg number\n",temp);
    }
    else
    {
        printf("Entered number %d is not an Armstromg number\n",temp);
    }
return 0;
}
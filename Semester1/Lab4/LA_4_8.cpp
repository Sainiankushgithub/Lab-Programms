//  WAP TO REVERSE THE NUMBER ENTERED THROUGH THE USER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int sum=0;
    printf("Enter the numer and you will get it's reverse\n");
    scanf("%d",&num);
    while(num>0)
    {
        int r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    printf("Reversed of the number is  : %d ",sum);
return 0;
}
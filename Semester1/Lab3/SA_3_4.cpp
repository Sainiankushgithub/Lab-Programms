// WAP TO CHECK WHETHER ENTERED YEAR IS A LEAP YEAR OR NOT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    printf("Enter the year to check whether\nEntered year is a leap year or not?\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("Entered year %d is a leap year\n",year);
    }
    else
    {
        printf("Entered year %d is not a leap year\n",year);
    }
    return 0;
}
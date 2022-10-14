// WAP TO ADD TWO TIMES IN HOUR, MINUTE AND SECOND FORMAT ENTERED THORUGH THE KEYBOARD IN THE FORMAT HH:MM:SS
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hour1,hour2;
    int minute1,minute2;
    int second1,second2;
    printf("\tEnter the time in format like this -> hh:mm:ss\n");
    printf("Enter the first time\n");
    scanf("%d %d %d",&hour1,&minute1,&second1);
    printf("Enter the second time\n");
    scanf("%d %d %d",&hour2,&minute2,&second2);
    printf("Displaying the two numer\n");
    printf("%d hr : %d min : %d sec ",hour1,minute1,second1);
    printf("\n");
    printf("%d hr : %d min : %d sec ",hour2,minute2,second2);
return 0;
}
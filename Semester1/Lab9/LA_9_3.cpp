// WAP to add two times (in hr-min-sec) by passing structure to a function.
#include<bits/stdc++.h>
using namespace std;
struct time
{
    int hour;
    int minute;
    int second;
};
struct time t1,t2;
int main()
{
    printf("Enter the first time i.e--> hour minute and second\n");
    printf("hour : ");
    scanf("%d",&t1.hour);
    printf("minute : ");
    scanf("%d",&t1.minute);
    printf("second : ");
    scanf("%d",&t1.second);
    printf("Enter the second time i.e--> hour minute and second\n");
    printf("hour : ");
    scanf("%d",&t2.hour);
    printf("minute : ");
    scanf("%d",&t2.minute);
    printf("second : ");
    scanf("%d",&t2.second);
return 0;
}
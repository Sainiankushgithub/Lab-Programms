// WAP TO CONVERT THE GIVEN SECOND INTO ITS EQUIVALENT HOUR MINUTE AND SECOND AS PER THE FOLLOWING FORMAT
// EXAMPLE 7560 SECOND = 2 HOUR 27 MINUTE AND 40 SECOND
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hour,minute,second;
    int seconds;
    printf("Enter the second which you want to be convert in hour:minute and second\n ");
    scanf("%d",&seconds);
    hour =seconds/3600;
    minute=(seconds-(3600*hour))/60;
    second=(seconds-(3600*hour)-(60*minute));
    printf("Hour=%d minute=%d second=%d",hour,minute,second);
return 0;
}
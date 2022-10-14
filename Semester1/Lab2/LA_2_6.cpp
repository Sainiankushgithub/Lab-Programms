// WAP TO WHICH CONVERT THE METRES INTO KILOMETRES
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int metre;
    printf("THIS WILL CONVERT THE DISTANCE METRE INTO KILOMETERE\n");
    printf("Enter the metre distance\n");
    scanf("%d",&metre);
    int kilometre=metre/1000;
    int km=metre%1000;
    printf("%d km %d m",kilometre,km);
return 0;
}
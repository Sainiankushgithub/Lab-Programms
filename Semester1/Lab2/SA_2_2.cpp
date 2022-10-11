// WAP TO FIND THE CENTIGRADE FOR A GIVEN FAHRENHEIT TEMPERATURE 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float fahrenheit;
    float celsius;
    printf("This is a convertor\n\t which convert the fahrenheit temperature into celsius temperature\n");
    printf("Enter the fahrenheit temperature\n");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("Temperature in celsius = %.1f *c",celsius);
    return 0;
}
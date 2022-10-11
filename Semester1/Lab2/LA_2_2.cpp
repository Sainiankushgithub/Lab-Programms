// WAP TO CONVERT TEMPERATURE FROM CENTIGRADE TO FAHRENHEIT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float centigrade;
    printf("This conversion will convert the celsius temperature into fahrenheit\n");
    printf("Enter the centigrade temperature\n");
    scanf("%f",&centigrade);
    float fahrenheit;
    fahrenheit=(centigrade*9/5)+32;
    printf("Fahrenheit=%1.f",fahrenheit);
return 0;
}
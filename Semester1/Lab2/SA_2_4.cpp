// WAP TO CALCULATE THE AREA OF TRIANGLE WHOSE BASE AND HEIGHT IS GIVEN
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double base;
    double height;
    printf("Enter the base of triangle\n");
    scanf("%lf",&base);
    printf("Enter the height of triangle\n");
    scanf("%lf",&height);
    double area=0.5*base*height;
    printf("Area of the triangle is %.2lf cm^2",area);
    return 0;
}
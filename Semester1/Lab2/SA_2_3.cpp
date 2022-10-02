// WAP TO CALCUALTE THE AREA OF THE CIRCLE
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    double radius;
    double pie=3.14;
    printf("Enter the radius of the circle\n");
    scanf("%lf",&radius);
    double area=pie*radius*radius;
    printf("Area of the circle is %lf cm^2",area);
    return 0;
}
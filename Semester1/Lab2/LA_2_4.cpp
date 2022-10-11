// WAP T0 CALCULATE THE AREA OF THE TRIANGLE WHOSE THREE SIDES ARE GIVEN
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    printf("Enter the first side of a triangle\n");
    scanf("%f",&a);
    printf("Enter the second side of triangle\n");
    scanf("%f",&b);
    printf("Enter the thrid side of triangle\n");
    scanf("%f",&c);
    float semiperimetre=(a+b+c)/2;
    printf("Semiperimetre=%.1f\n",semiperimetre);
    float area=sqrt(semiperimetre*(semiperimetre-a)*(semiperimetre-a)*(semiperimetre-a));
    printf("Area of triangle is %.1f",area);
return 0;
}
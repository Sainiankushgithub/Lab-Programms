// WAP TO FIND THE ROOTS OF THE QUADRATIC EQUATON
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double root1,root2,discriminant;
    double a,b,c;
    printf("Equation of the quadratic equation is like this\nAx^2 + Bx + c =0\n");
    printf("Enter the a value of the quadratic equation\n");
    scanf("%lf",&a);
    printf("Enter the b value of the quadratic equation\n");
    scanf("%lf",&b);
    printf("Enter the c value of the quadratic equation\n");
    scanf("%lf",&c);
    printf("Finding the discriminant value \nYour discriminant come out to be\n");
    discriminant=b*b-4*a*c;
    printf("%.2lf",discriminant);
    printf("\n");
    if(discriminant>0)
    {
        printf("Roots of the quadratic equation are real\nFinding the root1 and root2\n");
        root1=-b-(sqrt(discriminant))/2*a;
        root1=-b+(sqrt(discriminant))/2*a;
        printf("Root1=%2.lf\nRoot2=%2.lf",root1,root2);
    }
    else if(discriminant==0)
    {
        printf("Roots of the quadratic are real and equal\nSo, here root1=root2\nFinding the root1 and root2\n");
        root1=root2=-b/2*a;
        printf("Root1=Root2=%2.lf",root1);
    }
    else{
        printf("Roots are imagnary\n");
    }
    return 0;
}
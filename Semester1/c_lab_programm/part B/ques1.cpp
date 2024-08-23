/*Wap to write all possible quadratic roots and display with appropriate method*/
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    printf("Enter the a ,b and c value\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    double r1,r2,discriminent,imaginary;
    discriminent=b*b-4*a*c;
    if(discriminent==0)
    {
        printf("Roots of the quadratic equation are real and repeated\n");
        r1=-b/2*a;
        printf("Therefore root1=root2=%.2lf\n",r1);
    }
    else if(discriminent>0)
    {
        printf("Roots of the quadratic equation are real and distinct\n");
        r1=-b-sqrt(discriminent)/(2*a);
        r2=-b+sqrt(discriminent)/(2*a);
        printf("root1=%2.lf\nroot2=%2.lf\n",r1,r2);
    }
    else{
        printf("Roots of the quadratic equation are real and imaginary\n");
        r1=-b/(2*a);
        imaginary=sqrt(-discriminent)/(2*a);
        printf("root1=%.2lf + %2.lfi\nroot2=%.2lf - %.2lfi",r1,imaginary,r1,imaginary);
    }
    return 0;
}
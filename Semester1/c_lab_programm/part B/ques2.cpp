/*Wap to implement a calculator using switch statement*/
#include<stdio.h>
int main()
{
    double a,b;
    char temp,ch;
    printf("Enter the first and second number\n");
    scanf("%lf%lf",&a,&b);
    scanf("%c",&temp);
    printf("For addition press '+'\nFor subtraction press '-'\nFor division presss '/'\nFor multiplication press'*'\n");
    printf("Enter the choice\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        {
            double sum=a+b;
            printf("Addition of two number is %.2lf",sum);
            break;
        }
        case '-':
        {
            double sub=a-b;
            printf("subtration of two number is %.2lf",sub);
            break;
        }
        case '*':
        {
            double mult=a*b;
            printf("Multiplication of two number is %.2lf",mult);
            break;
        }
        case '/':
        {
            double div=a/b;
            printf("Division  of two number is %.2lf",div);
            break;
        }
        default:
        {
            printf("You have entered an invalid entry\n");
            break;
        }
    }
    return 0;
}
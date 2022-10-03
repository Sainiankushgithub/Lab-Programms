// WAP TO INPUT TWO INTEGER AND DO OPERATION LIKE ADD, SUB, MULTIPLICATION, DIVIDE ACCORDING TO THE USER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num1;
    double num2;
    printf("HII THERE WHAT DO YOU WANT TO FIND BELOW\n");
    printf("Enter--> 1 for ADD\nEnte-->2 for SUBTRACTION\nEnter-->3 for MULTIPLICATION\nEnter-->4 for DIVIDE\nEnter 5--> for clear screen\n");
    char option;
    printf("Enter the choice\n");
    scanf("%d",option);
        switch(option)
        {
            case '1':
            {
                printf("Here you choose ADDITION \n Enter the first number\n");
                scanf("%d",num1);
                printf("Enter the second number\n");
                scanf("%d",num2);
                double addition=num1+num2;
                printf("ADDITION of the two number is %2.lf\n",addition);
                break;
            }
            case 2:
            {
                printf("Here you choose SUBTRACTION \n Enter the first number\n");
                scanf("%d",num1);
                printf("Enter the second number\n");
                scanf("%d",num2);
                double subtraction=num1-num2;
                printf("SUBTRACTON of the two number is %2.lf\n",subtraction);
                break;
            }
            case 3:
            {
                printf("Here you choose MULTIPLICATION \n Enter the first number\n");
                scanf("%d",num1);
                printf("Enter the second number\n");
                scanf("%d",num2);
                double multiplication=num1*num2;
                printf("MULTIPLICATION of the two number is %2.lf\n",multiplication);
                break;
            }
            case 4:
            {
                printf("Here you choose DIVISION \n Enter the first number\n");
                scanf("%d",num1);
                printf("Enter the second number\n");
                scanf("%d",num2);
                double division=num1/num2;
                printf("DIVISION of the two number is %2.lf\n",division);
                break;
            }
            case 5:
            {
                system("cls");
                break;
            }
            default :
            {
                printf("Invalid Entry\n");
                break;
            }
        }
    return 0;
}
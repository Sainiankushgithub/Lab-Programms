
// VOID AND NULL POINTER IN C 

#include<stdio.h>
int main()
{

    //  VOID POINTER 


    int a;
    char b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Address of a is : %d\n",&a);
    printf("Enter the value of char b : ");
    scanf(" %c",&b);
    printf("Address of b is : %d\n",&b);
    void*ptr;
    ptr=&a;
    ptr=&b;
    printf("The value of a : %c",(*(char*)ptr));


    // NULL POINTER 


    
    return 0;
}
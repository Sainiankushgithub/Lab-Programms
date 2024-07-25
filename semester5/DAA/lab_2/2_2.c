/*
2.2 Aim of the program: Write a program in C to find GCD of two numbers using recursion. Read all pair of numbers from a file and store the result in a separate file.
*/
#include<stdio.h>
// USED ECLUDIEAN ALGORITHM 
int gcd_loop(int num1,int num2)
{
  while(num1!=num2)
  {
    if(num1>num2)
    {
      num1-=num2;
    }
    else
    {
      num2-=num1;
    }
  }
  return num1;
}
int gcd_recursion(int num1,int num2)
{
  if(num1==num2)
  {
    return num1;
  }
  if(num1>num2)
  {
    return gcd_recursion(num1-num2,num2);
  }
  else{
    return gcd_recursion(num1,num2-num1);
  }
}
int main()
{
  int num1,num2;
  printf("Enter the number1 and number2 \n");
  scanf("%d%d",&num1,&num2);
  printf("Your entered numbers are : %d , %d \n",num1,num2);
  int loop_result=gcd_loop(num1,num2);
  printf("LOOP \nGcd of two number is : %d \n",loop_result);
  int recursion_result=gcd_recursion(num1,num2);
  printf("RECURSION \nGcd of two number is : %d \n",recursion_result);
  return 0;
}
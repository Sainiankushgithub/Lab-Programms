// 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float sum=0;
    float physic,math,chemistry,cse,biology;
    printf("To Calculate the Average \n");
    printf("Enter the marks of your five subject\n");
    printf("Enter the marks of the physics\n");
    scanf("%f",&physic);
    printf("Enter the marks of the math\n");
    scanf("%f",&math);
    printf("Enter the marks of the chemistry\n");
    scanf("%f",&chemistry);
    printf("Enter the marks of the biology\n");
    scanf("%f",&biology);
    printf("Enter the marks of the cse\n");
    scanf("%f",&cse);
    sum=physic+math+biology+cse+chemistry;
    printf("Sum is %.2f",sum);
    float average=sum/5;
    printf("Average of your marks is %.2f\n",average);
return 0;
}
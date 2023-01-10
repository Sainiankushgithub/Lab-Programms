/*WAP to store n employees data such as employee name, gender, designation, department, basic
pay etc using structures with dynamically memory allocation. Calculate the gross pay of each
employees as follows:
Gross pay=basic pay + HR + DA
HR=25% of basic, DA=75% of basic*/
#include<bits/stdc++.h>
using namespace std;
struct employee
{
    char name[30],gender[10],designation[50],department[50];
    float basic_pay;
    float gross_pay;
    char temp;
};
struct employee e[100];
void display(int );
int main()
{
    int n;
    printf("Enter the number for how many data of the employee you want to enter\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&e[i].temp);
        printf("Enter the name of the employee %d\n",i+1);
        gets(e[i].name);
        printf("Enter the gender of the employee\n");
        gets(e[i].gender);
        printf("Enter the designation of the employee\n");
        gets(e[i].designation);
        printf("Enter the department of the employee\n");
        gets(e[i].department);
        printf("Enter the basic pay of the employee\n");
        scanf("%f",&e[i].basic_pay);
        float hr,da;
        hr=0.25*e[i].basic_pay;
        da=0.75*e[i].basic_pay;
        e[i].gross_pay=e[i].basic_pay+hr+da;
    }
    display(n);
return 0;
}
void display(int  n)
{
    for(int i=0;i<n;i++)
    {
        printf("Displaying the detial of the employee %d\n",i+1);
        printf("Name : ");
        puts(e[i].name);
        printf("Gender : ");
        puts(e[i].gender);
        printf("Designation : ");
        puts(e[i].designation);
        printf("Department : ");
        puts(e[i].department);
        printf("Basic pay : ");
        printf("%d\n",e[i].basic_pay);
        printf("Gross pay : ");
        printf("%.2f\n",e[i].gross_pay);
    }
}
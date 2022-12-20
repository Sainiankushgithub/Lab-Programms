/*WAP to store n student’s information (i.e. student’s roll no, name, gender, marks in 5 subjects
etc) of an educational institute and display all the data with total marks of each student, using
array of structure. If full mark of each subject is considered as 100 and pass mark as 40, then
display the list of students failed in a particular subject.*/
#include<bits/stdc++.h>
using namespace std;
struct student 
{
    char name[100];
    char gender[50];
    int marks[20];
    int roll_no;
    int sum;
    float average;
    char temp;
};
struct student s[100];
void output(int n);
int main()
{
    int n;
    printf("Enter the number for how many data of the student you want to store\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        s[i].sum=0;
        scanf("%c",&s[i].temp);
        printf("Enter the name of the student %d :\n",i+1);
        gets(s[i].name);
        printf("Enter the gender of the student\n");
        gets(s[i].gender);
        printf("Enter the roll no of the student\n");
        scanf("%d",&s[i].roll_no);
        printf("Enter the marks of the 5 subjects of the student %d :\n",i+1);
        for(int j=0;j<5;j++)
        {
            scanf("%d",&s[i].marks[j]);
           s[i].sum=s[i].sum+s[i].marks[j];
        //    printf("%d\n",s[i].sum);
        }
        s[i].average=(s[i].sum)/5;
        // printf("\n%.2f",s[i].average);
    }
    output(n);
return 0;
}
void output(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Displaying the details of the student : %d\n",i+1);
        printf("Name : ");
        puts(s[i].name);
        printf("Gender :");
        puts(s[i].gender);
        printf("Roll no. : %d\n",s[i].roll_no);   
        if((s[i].average)>=90)
        {
            printf("You have scored 'O' Grade\n");
        }
        else if((s[i].average)>=80)
        {
            printf("You have scored 'E' Grade\n");
        }
        else if((s[i].average)>=70)
        {
            printf("You have scored 'A' Grade\n");
        }
        else if((s[i].average)>=60)
        {
            printf("You have scored 'B' Grade\n");
        }
        else if((s[i].average)>=50)
        {
            printf("You have scored 'C' Grade\n");
        }
        else if((s[i].average)>=40)
        {
            printf("You have scored 'D' Grade\n");
        }
        else
        {
            printf("You are failed\n");
        }
    }
}
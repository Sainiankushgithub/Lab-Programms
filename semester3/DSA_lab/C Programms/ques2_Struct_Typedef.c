#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Student 
{
    char name[20];
    int roll_no;
    int age;
}std;
void display(std s)
{
    printf("Name : ");
    puts(s.name);
    printf("Roll number : %d\n",s.roll_no);
    printf("Age : %d\n",s.age);
}
void clearInputBuffer()
{
    int c;
    while((c=getchar())!='\n'&&c!=EOF);
}
int main()
{
    std s1,s2;
    printf("Enter the name of the student 1 : ");
    fgets(s1.name,sizeof(s1.name),stdin);
    s1.name[strcspn(s1.name,"\n")]='\0';
    printf("Enter the roll number : ");
    scanf("%d",&s1.roll_no);
    printf("Enter the age : ");
    scanf("%d",&s1.age);
    clearInputBuffer();
    printf("Enter the name if student 2 : ");
    fgets(s2.name,sizeof(s2.name),stdin);
    s2.name[strcspn(s2.name,"\n")]='\0';
    printf("Enter the roll number : ");
    scanf("%d",&s2.roll_no);
    printf("Enter the age : ");
    scanf("%d",&s2.age);
    display(s1);
    display(s2);
    return 0;
}
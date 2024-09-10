#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    int id;
    char name[20];
    char section[10];
};
typedef struct Student s;
s s1,s2;
void clearInputBuffer()
{
    int c;
    while((c=getchar())!='\n'&&c!=EOF);
}
void display(struct Student s)
{
    printf("Name : ");
    puts(s.name);
    printf("Section : ");
    puts(s.section);
    printf("Roll number : %d",s.id);
}
int main()
{
    printf("Enter the ID of the student 1 : ");
    scanf("%d",&s1.id);
    clearInputBuffer();
    printf("Enter the name of the student 1 : ");
    fgets(s1.name,sizeof(s1.name),stdin);
    s1.name[strcspn(s1.name,"\n")]='\0';
    printf("Enter the Section of the student 1 : ");
    fgets(s1.section,sizeof(s1.section),stdin);
    s1.section[strcspn(s1.section,"\n")]='\0';
    printf("Enter the ID of the student 2 : ");
    scanf("%d",&s2.id);
    clearInputBuffer();
    printf("Enter the name of the student 2 : ");
    fgets(s2.name,sizeof(s2.name),stdin);
    printf("Enter the section of the student 2 : ");
    fgets(s2.section,sizeof(s2.name),stdin);
    s2.section[strcspn(s2.section,"\n")]='\0';
    display(s1);
    display(s2);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// struct Student {
//     int id;
//     char name[100];  // Use a fixed-size array for name
//     char section[10];
// };

// void clearInputBuffer() {
//     int c;
//     while ((c = getchar()) != '\n' && c != EOF);
// }

// void display(struct Student s) {
//     printf("Name: %s\n", s.name);
//     printf("Section: %s\n", s.section);
//     printf("Roll number: %d\n", s.id);
// }

// int main() {
//     struct Student s1;

//     printf("Enter the ID of the student: ");
//     scanf("%d", &s1.id);
    
//     // Clear the newline character from the input buffer
//     clearInputBuffer();

//     printf("Enter the name of the student: ");
//     fgets(s1.name, sizeof(s1.name), stdin);
//     s1.name[strcspn(s1.name, "\n")] = '\0';  // Remove newline

//     printf("Enter the Section of the student: ");
//     fgets(s1.section, sizeof(s1.section), stdin);
//     s1.section[strcspn(s1.section, "\n")] = '\0';  // Remove newline

//     display(s1);

//     return 0;
// }

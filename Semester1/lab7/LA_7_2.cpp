//  Write a program to concatenate two strings without using any library function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Concatenation of two string without using the library function
    char str1[100];
    char str2[100];
    printf("Enter the first string\n");
    gets(str1);
    printf("Enter the second string\n");
    gets(str2);
    int length=strlen(str1);
    int i;
    for(i=0;str1[i]!='\0';i++);
    for(int j=0;str2[j]!='\0';j++)
    {
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
    printf("concatenation of two string without using the library function : %s\n",str1);
    // Concatenation of two string with using the library function
    // char s1[100];
    // char s2[100];
    // printf("Enter the first string\n");                       *******************DONT WRITE THIS PART*************************
    // gets(s1);
    // printf("Enter the second string\n");
    // gets(s2);
    // printf("concatenation of two string with using the library function : %s\n",strcat(s1,s2));
return 0;
}
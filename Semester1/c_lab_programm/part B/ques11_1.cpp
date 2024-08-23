/*Wap to enter 3 student information and display it using array of a structure*/ 
#include<stdio.h>
#include<string.h>
int countvowel(char *str)
{
    int count=0;
    while((*str)!='\0')
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||*str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char str[100];
    printf("Enter the string\n");
    gets(str);
    printf("Total number of vowels are %d",countvowel(str));
}
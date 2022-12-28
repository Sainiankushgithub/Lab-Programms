// WAP to print a string in reverse using a pointer.
#include<stdio.h>
#include<string.h>
#define s 100
void reversestring(char *ptr);
int main()
{
    char str[s];
    printf("Enter the string to print it in reverse order\n");
    gets(str);
    char *ptr;
    ptr=str;
    reversestring(ptr);
    return 0;
}
void reversestring(char *ptr)
{
    for(*ptr='\0';*ptr>=0;ptr--)
    {
        printf("%c",*ptr);
    }
}
// WAP to count vowels and consonants in a string using pointer
#include<stdio.h>
#include<string.h>
#define s 100
void count(char *ptr)
{
    int vcount=0;
    int ccount=0;
    while(*ptr!='\0')
    {
        if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'||*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
        {
            vcount++;
        }
        else if(*ptr>='a'&&*ptr<='z'||*ptr>='A'&&*ptr<='Z')
        {
                ccount++;
        }
        ptr++;
    }
    printf("Number of vowels are : %d\n",vcount);
    printf("Number of consonant are : %d\n",ccount);
}
int main()
{
    char str[s];
    char *ptr;
    printf("Enter the string to count the number of vowels and consonant\n");
    gets(str);
    ptr=str;
    count(ptr);
    return 0;
}
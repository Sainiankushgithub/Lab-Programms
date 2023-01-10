/*Write a program to count the number of characters, alphabets, tabs, newlines, words, vowels,
consonants present in a string*/
#include<stdio.h>
#include<string.h>
#define s 100
int main()
{
    char str[s];
    printf("Enter the string to count the number of characters, alphabets, tabs, newlines, words, vowels,consonants\n");
    gets(str);
    int length=strlen(str);
    printf("Total number of character are : %d\n",length);
    int vowels=0;
    int word=1;
    int tab=0;
    int alphabet=0;
    for(int i=0;i<length;i++)
    {
        if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
        {
            alphabet++;
        }
        // THIS IS FOR VOWELS
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
        {
            vowels++;
        }
        // THIS IS FOR CONSONANT
        if(str[i]==' ')
        {
            word++;
        }
        if(str[i]=='   ')
        {
            tab++;
        }
    }
    printf("Total number of vowels are : %d\n",vowels);
    printf("Total number of word are   : %d\n",word);
    printf("Total number of tabs are   : %d\n",tab);
    printf("Total number of alphabet are   : %d\n",alphabet);
    return 0;
}
// WAP TO CHECK WHETHER ENTER CHARACTER IS A VOWEL OR CONSONANT OR NOT AN ALPHABET
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    printf("Enter any character to check whether\n Entered character is a vowel, consonant,or not an alphabet\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'&& ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("Enter character %c is a vowel\n",ch);
    }
    else if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {
        printf("Enter character %c is a consonant\n",ch);
    }
    else 
    {
        printf("Enter character %c is not an aplhabet\n",ch);
    }
    return  0;
}
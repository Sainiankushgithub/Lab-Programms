// WAP TO CHECK WHETHER ENTERED CHARACTER IS A DIGIT,LETTER OR SPECIAL CHARACTER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    printf("Enter any  character to check whether\n It is DIGIT, LETTER OR SPECIAL CHARACTER\n");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {
        printf("Entered character--> %c\nIt is a LETTER\n",ch);
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("Entered character--> %c\nIt is a DIGIT\n",ch);
    }
    else{
        printf("Entered character--> %c\nIt is a SPECIAL CHARACTER\n",ch);
    }
    return 0;
}
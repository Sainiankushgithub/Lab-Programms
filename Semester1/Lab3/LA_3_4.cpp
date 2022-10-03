// WAP TO READ AN ALPHABET FROM THE USER AND CONVERT IT INTO LOWERCASE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char upper_case;
    char lower_case;
    printf("Enter the uppercase Alphabet \nAnd this  will convert the uppercase Aplhabet into lowercase Alphabet\n");
    scanf("%c",&upper_case);
    lower_case=upper_case+32;
    if(upper_case>='A'&&upper_case<='Z')
    {
        printf("The Alhabet you have enterred --> %c \nThe lower case conversion --> %c\n",upper_case,lower_case);
    }
    else 
    {
        printf("I asked you to entered the uppercase Alphabet not any you want to !!!\n");
    }
    return 0;
}
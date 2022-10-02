// WAP TO CONVERT THE LOWERCASE ALPHABET INTO UPERCASE ALPHABET
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char lower_case;
    char upper_case;
    printf("This is a type of converter\n\t which convert the lower case alphabet into upper case\n");
    printf("Enter the lower case value\n");
    scanf("%c",&lower_case);
    upper_case=lower_case-32;
    printf("Converting the lower case=%c --> Into upper case =%c",lower_case,upper_case);
    return 0;
}
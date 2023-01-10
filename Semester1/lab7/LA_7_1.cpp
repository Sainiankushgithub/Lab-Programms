// WAP to extract the last character of each word of a given string
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    printf("Enter the string how much you want to enter ?\n");
    gets(str);
    int length=strlen(str);
    printf("Lenght of your string is %d\n",length);
    printf("Extracting the last character of each word of a given string\n");
    for(int i=0;i<=length;i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            printf("%c ",str[i-1]);
        }
    }
return 0;
}
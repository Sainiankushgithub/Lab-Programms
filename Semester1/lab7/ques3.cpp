// WAP to check whether a string entered through keyboard is palindrome or not.
#include<stdio.h>
#include<string.h>
#define s 100
int main()
{
    char str[s];
    char temp[s];
    printf("Enter the string\n");
    gets(str);
    int length=strlen(str);
    printf("Length of your string is : %d\n",length);
    printf("Displaying the string before reverse\n");
    puts(str);
    int i;
    int j=0;
    for(i=length-1;i>=0;i--)
    {
        temp[j]=str[i];
        j++;
    } 
    temp[j]='\0';
    printf("Displaying the string after reverse\n");
    puts(temp);
    int flag=0;
    for(int i=0;i<length;i++)
    {
        if(str[i]!=temp[i])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("Entered string %s is not palindrome",str);
    }
    else{
        printf("Entered string %s is palindrome",str);
    }
return 0;
}
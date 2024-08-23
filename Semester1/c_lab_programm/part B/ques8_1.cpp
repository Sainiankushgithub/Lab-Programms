#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    printf("Enter the string\n");
    gets(str);
    int len=strlen(str);
    for(int i=0;i<len/2;i++)
    {
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    printf("Reverse of the string\n");
    puts(str);
    int flag=0;
    for( int i=0;i < len/2;i++){
        if(str[i] != str[len-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        printf("%s is not a palindrome", str);
    }    
    else {
        printf("%s is a palindrome", str);
    }
return 0;
}
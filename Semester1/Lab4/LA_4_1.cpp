// WAP TO PRINT YOUR NAME 5 TIMES USING WHILE LOOP
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[100];
    printf("Enter your name\n\a");
    scanf("%[^\n]%*c",name);
    int i=1;
    while(i<=5)
    {
        printf("%s\n",name);
        i++;
    }
      return 0;
}
// WAP TO INPUT ANY INTEGER AND PRINT YOUR NAMES THAT TIMES
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char name[100];
//     printf("Enter your name\n\a");
//     scanf("%[^\n]%*c",name);
//     int size;
//     printf("Enter the size in how many times you want to print your name\n");
//     scanf("%d",&size);
//     int i=1;
//     while(i<=size)
//     {
//         printf("%s\n",name);
//         i++;
//     }
//       return 0;
// }

// ** WRITING THE NUMBER BEFORE THE STRING THEN THERE WILL BE SOME CHANGES IN THE PROGRAMM
//  WAP TO INPUT ANY INTEGER AND PRINT YOUR NAMES THAT TIMES
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    char name[100];
    char temp;
    printf("Enter the size in how many times you want to print your name\n");
    scanf("%d",&size);
    printf("Enter your name: ");
    scanf("%c",&temp);
    scanf("%[^\n]%*c",name);
    int i=1;
    printf("Your name %d times\n",size);
    while(i<=size)
    {
        printf("%s",name);
        printf("\n");
        i++;
    }
return 0;
}
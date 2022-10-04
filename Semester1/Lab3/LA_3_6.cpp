// WAP TO DISPLAY THE GRADES SECURED BY THE STUDENT BY USING ELSE IF LADDER STATEMENT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int total_marks;
    printf("Enter the total marks secured by the student\n");
    scanf("%d",&total_marks);
    int tm=total_marks/10;
    if(tm>=9)
    {
        printf("According to your marks--> %d\nyour grades is--> 'O'\n ",total_marks);
    }
    else if(tm>=8)
    {
        printf("According to your marks--> %d\nyour grades is--> 'E'\n ",total_marks);
    }
    else if(tm>=7)
    {
        printf("According to your marks--> %d\nyour grades is--> 'A'\n ",total_marks);
    }
    else if(tm>=6)
    {
        printf("According to your marks--> %d\nyour grades is--> 'B'\n ",total_marks);
    }
    else if(tm>=5)
    {
        printf("According to your marks--> %d\nyour grades is--> 'C'\n ",total_marks);
    }
    else if(tm>=4)
    {
        printf("According to your marks--> %d\nyour grades is--> 'D'\n ",total_marks);
    }
    else 
    {
        printf("OOPS YOU GOT FAIL!!!\n YOU HAVE TO STUDY MORE\n");
    }
    return 0;
}
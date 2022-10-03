// WAP TO FIND THE GRADES OF THE STUDENT
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int grades;
    int total_marks;
    printf("Enter your total marks\nTo check your GRADES that you have gotten\n");
    scanf("%d",&total_marks);
    int tm=total_marks/10;
    switch(tm)
    {
        case 9:
        {
            printf("According to your marks i.e %d\n Your grades is 'O'\n",total_marks);
            break;
        }
        case 8:
        {
            printf("According to your marks i.e %d\n Your grades is 'E'\n",total_marks);
            break;
        }
        case 7:
        {
            printf("According to your marks i.e %d\n Your grades is 'A'\n",total_marks);
            break;
        }
        case 6:
        {
            printf("According to your marks i.e %d\n Your grades is 'B'\n",total_marks);
            break;
        }
        case 5:
        {
            printf("According to your marks i.e %d\n Your grades is 'C'\n",total_marks);
            break;
        }
        case 4:
        {
            printf("According to your marks i.e %d\n Your grades is 'D'\n",total_marks);
            break;
        }
        case 3:
        {
            printf(" OOPS FAIL !!!\n You have to study more \n");
            break;
        }
        case 2:
        {
            printf(" OOPS FAIL !!!\n You have to study more \n");
            break;
        }
        case 1:
        {
            printf(" OOPS FAIL !!!\n You have to study more \n");
            break;
        }
        default:
        {
            printf("You Have Entered The Invalid Marks\n");
            break;
        }
    }
    return 0;
}
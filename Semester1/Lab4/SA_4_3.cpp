// WAP TO CALCULATE THE FACTORIAL OF THE GIVEN NUMBER
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int factorial;
    int mult=1;
    printf("Enter the number whose Factorial you want to find\n");
    scanf("%d",&factorial);
    printf("Displaying the factorial of your numnedr\n");
    for(int i=factorial;i>1;i--)
    {
        printf("%d *",i) ;
        mult=mult*i;
    }
    printf("1");
    printf("\n");
    printf("%d",mult);
    return 0;
}
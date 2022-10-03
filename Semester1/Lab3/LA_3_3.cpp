// WAP TO CHECK WHETHER ENTERED NUMBER IS EVEN OR ODD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    printf("Entered the number to check whether entered number is even or odd\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Entered number %d is an even number\n",num);
    }
    else
    {
        printf("Entered  number %d is an odd number\n",num);
    }
    return 0;
}
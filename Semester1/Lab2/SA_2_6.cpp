// WAP TO CONVERT GIVEM PAISA INTO ITS EQUIVALENT RUPEE AND PASIA PER THE FOLLOWING FORMAT 
// EXAMPLE 550 PAISA = 5 RUPEE AND 50 PAISA
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int paisa;
    printf("Enter the number of paisa which you want to be convert in rupee\n");
    scanf("%d",&paisa);
    int rupee=paisa/100;
    int rp=paisa%100;
    printf("Conversion=%d rupee . %d paisa",rupee,rp);
return 0;
}
// WAP TO FIND FIRST N NUMBER OF FIBONACCI SERIES
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int next_term=a+b;
    int n;
    printf("Enter the number where upto you want to find thefibbonacci series\n");
    scanf("%d",&n);
    printf("Fibbonacci series: %d %d %d ",a,b,next_term);
    for(int i=3;i<=n;i++)
    {
      a=b;
      b=next_term;
      next_term=a+b;
      printf("%d ",next_term);
    }
return 0;
}
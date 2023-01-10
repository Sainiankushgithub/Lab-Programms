// WAP to add two distances (in km-meter) using structures.
#include<bits/stdc++.h>
using namespace std;
struct distances
{
    int km;
    int km_m;
    int m;
};
struct distances d1,d2;
void display();
int main()
{
    printf("Enter the first distance in metre\n");
    scanf("%d",&d1.m);
    printf("Enter the second distance in metre\n");
    scanf("%d",&d2.m);
    d1.km_m=d1.m/1000;
    d1.km=d1.m%1000;
    d2.km_m=d2.m/1000;
    d2.km=d2.m%1000;
    printf("Distance one is %dkm %dm\n",d1.km_m,d1.km);
    printf("Distance second is %dkm %dm\n",d2.km_m,d2.km);
    display();
return 0;
}
void display()
{
    int add1;
    int add2;
    add1=d1.km_m+d2.km_m;
    add2=d1.km+d2.km;
    if(add2>1000)
    {
        add1++;
        add2=add2%1000;
    }
    printf("Addition of two distances is %dkm %dm",add1,add2);
}
/*Wap to find biggest number among 3 number*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first ,second and third number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("First number %d is greator\n",a);
        }
        else
        {
            printf("Third number %d is greator\n",b);
        }
    }
    else if(b>c)
    {
        printf("Second number %d is greator\n",b);
    }
    else
    {
        printf("Third number %d is greator\n",c);
    }
    return 0;
}
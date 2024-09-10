#include<stdio.h>
#include<string.h>
int CheckSubString(char s1[],char s2[])
{
    int l1=strlen(s1);
    int l2=strlen(s2);
    for(int i=0;i<=l1-l2;i++)
    {
        int j;
        for(j=i;j<l2;j++)
        {
            if(s1[j]!=s2[j])
            {
                break;
            }
        }
        if(j==l2)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char s1[100];
    char s2[50];
    printf("Enter the string 1\n");
    scanf("%s",s1);
    printf("Enter the string 2 ;\n");
    scanf("%s",s2);
    int l=CheckSubString(s1,s1);
    if(l==-1)
    {
        printf("Not a SUBSTRING :\n");
    }
    else
    {
        printf("%d",l);
    }
    return 0;
}
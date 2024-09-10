#include<stdio.h>
#include<stdlib.h>
int main()
{
    int v;
    printf("Enter the vertex \n");
    scanf("%d",&v);
    char temp;
    int arr[v][v];
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            scanf("%c",&temp);
            char ch;
            printf("Vertex %d Adjacent to Vertex %d Y/N \n",i+1,j+1);
            scanf("%c",&ch);
            if(ch=='Y'||ch=='y')
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=0;
            }
        }
    }
    printf("Dispalying your Adjacent matrix \n");
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
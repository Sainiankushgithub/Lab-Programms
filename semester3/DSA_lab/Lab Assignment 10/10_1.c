#include<stdio.h>
#include<stdlib.h>
int main()
{
    int v;
    printf("Enter the vertex \n");
    scanf("%d",&v);
    char temp;
    int AdjMat[v];
    for(int i=0;i<v;i++)
    {
        int count=0;
        for(int j=0;j<v;j++)
        {
            scanf("%c",&temp);
            char ch;
            printf("Vertex %d and Vertex %d are Adjacent Y/N \n",i+1,j+1);
            scanf("%c",&ch);
            if(ch=='y'||ch=='Y')
            {
                count++;
            }
        }
        AdjMat[i]=count;
    }
    printf("Vertex   degreee \n");
    for(int i=0;i<v;i++)
    {
        printf("%d        %d\n",i+1,AdjMat[i]);
    }
    return 0;
}
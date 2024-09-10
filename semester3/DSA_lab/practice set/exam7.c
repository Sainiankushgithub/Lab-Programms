// SPARSE MATRIX REPRESENTATION 

#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,z=0,nz=0;
    printf("row:\n");
    scanf("%d",&n);
    int mat[10][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==0)
            {
                z++;
            }
            else
            {
                nz++;
            }
        }
    }
    if(nz>z)
    {
        printf("error :\n");
        return 0;
    }
    else
    {
        int sp[10][3];
        sp[0][0]=nz+1;
        sp[0][1]=3;
        sp[0][2]=nz;
        int k=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]!=0)
                {
                    sp[k][0]=i;
                    sp[k][1]=j;
                    sp[k][2]=mat[i][j];
                    k++;
                }
            }
        }
        printf("Dispalying :\n");
        for(int i=0;i<nz+1;i++)
        {
            printf("%d\t%d\t%d\n",sp[i][0],sp[i][1],sp[i][2]);
        }
    }
    return 0;
}
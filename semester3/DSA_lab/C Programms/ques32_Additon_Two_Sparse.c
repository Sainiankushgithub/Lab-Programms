// #include<stdio.h>
// #include<stdlib.h>
// int nz1=0,z1=0,nz2=0,z2=0,k1=1,k2=1;
// void display(int **mat,int row,int column,int *nz,int *z)
// {
//     *nz=0;
//     *z=0;
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<column;j++)
//         {
//             printf("%d\t",mat[i][j]);
//             if(mat[i][j]!=0)
//             {
//                (*nz)++;
//             }
//             else
//             {
//                 (*z)++;
//             }
//         }
//         printf("\n");
//     }
// }
// void Display(int **s,int k,int nz)
// {
//     s[0][0]=nz+1;
//     s[0][1]=3;
//     s[0][2]=k-1;
//     for(int i=0;i<nz+1;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d\t",s[i][j]);
//         }
//         printf("\n");
//     }
// }
// void sparse(int **mat,int row,int column,int *kk,int **s)
// {
//     if(nz1>z1)
//     {
//         printf("Incompatible matrix :\n");
//         exit(1);
//     }
//     else
//     {
//          int k=1;
//         for(int i=0;i<row;i++)
//         {
//             for(int j=0;j<column;j++)
//             {
//                 if(mat[i][j]!=0)
//                 {
//                     s[k][0]=i;
//                     s[k][1]=j;
//                     s[k][2]=mat[i][j];
//                     k++;
//                 }
//             }
//         }
//         (*kk)=k;
//     }
// }
// // void Addition(int **s1,int **s2,int nz1,int nz2)
// // {
// //     int resultsize=(nz1>nz2)?nz1:nz2;
// //     int **result=(int**)malloc(resultsize*sizeof(int*));
// //     for(int i=0;i<resultsize;i++)
// //     {
// //         result[i]=(int*)malloc(3*sizeof(int));
// //     }

// // }
// int main()
// {
//     int row,column;
//     printf("Enter the dimension of a matrix : \n");
//     scanf("%d%d",&row,&column);
//     int **mat1;
//     int **mat2;
//     mat1=(int **)malloc(row*sizeof(int*));
//     mat2=(int **)malloc(row*sizeof(int*));
//     printf("Enter the elements of matrix 1 :\n");
//     for(int i=0;i<row;i++)
//     {
//         mat1[i]=(int *)malloc(column*sizeof(int));
//         for(int j=0;j<column;j++)
//         {
//             scanf("%d",&mat1[i][j]);
//         }
//     }
//     printf("Enter the elements of matrix 2 :\n");
//     for(int i=0;i<row;i++)
//     {
//         mat2[i]=(int *)malloc(column*sizeof(int));
//         for(int j=0;j<column;j++)
//         {
//             scanf("%d",&mat2[i][j]);
//         }
//     }
//     printf("Displaying matrix 1 :\n");
//     display(mat1,row,column,&nz1,&z1);
//     printf("Displaying matrix 2 :\n");
//     display(mat2,row,column,&nz2,&z2);
//     int **s1;
//     int **s2;
//     s1=(int **)malloc(nz1*sizeof(int *));
//     for(int i=0;i<nz1;i++)
//     {
//         s1[i]=(int *)malloc(3*sizeof(int));
//     }
//     s2=(int **)malloc(nz2*sizeof(int *));
//     for(int i=0;i<nz2;i++)
//     {
//         s2[i]=(int *)malloc(3*sizeof(int));
//     }
//     sparse(mat1,row,column,&k1,s1);
//     printf("Displaying the sparse matrix 1 :\n");
//     Display(s1,k1,nz1);
//     sparse(mat2,row,column,&k2,s2);
//     printf("Displaying the sparse matrix 2 :\n");
//     Display(s2,k2,nz2);
//     printf("Addition of two matrix is :\n");
//     // Addition(s1,s2,nz1,nz2);
//     return 0;
// }
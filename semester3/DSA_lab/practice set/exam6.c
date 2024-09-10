// MATRIX 
// #include<stdio.h>
// #include<stdlib.h>
// void display(int r,int c,int mat[][c])
// {
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             printf("%d ",mat[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int r,c;
//     scanf("%d%d",&r,&c);
//     int **mat=(int**)malloc(r*sizeof(int*));
//     for(int i=0;i<r;i++)
//     {
//         mat[i]=(int*)malloc(c*sizeof(int));
//     }
//     for(int i=0;i<r;i++)
//     {
//         for(int j=0;j<c;j++)
//         {
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("Displaying :\n");
//     display(r,c,mat);
//     for(int i=0;i<r;i++)
//     {
//         free(mat[i]);
//     }
//     free(mat);
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

void display(int r, int c, int mat[][c]) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int r, c;

  printf("Enter the number of rows and columns in the matrix: ");
  scanf("%d %d", &r, &c);

  int (*mat)[c] = malloc(r * sizeof(*mat)); // Allocate memory for the matrix.

  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &mat[i][j]); // Input elements directly into the matrix.
    }
  }

  printf("Displaying the matrix:\n");
  display(r, c, mat);

  free(mat); // Free the memory allocated for the matrix.

  return 0;
}

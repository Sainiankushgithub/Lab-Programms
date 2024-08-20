#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparisons = 0;

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (i <= h && A[i] <= pivot); 
        do
        {
            j--;
        } while (j >= l && A[j] > pivot);   
        if (i < j)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    int temp = A[l];
    A[l] = A[j];
    A[j] = temp;

    return j;
}

void quicksort(int A[], int l, int h)
{
    if (l < h)
    {
        int j = partition(A, l, h);
        quicksort(A, l, j);       
        quicksort(A, j + 1, h);   
    }
}

void inputArray(int A[], int *size)
{
    printf("Enter the number of elements: ");
    scanf("%d", size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < *size; i++)
    {
        scanf("%d", &A[i]);
    }
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    int option;
    int A[500];
    int n;
    clock_t start, end;
    double cpu_time_used;

    while (1)
    {
        printf("MAIN MENU (QUICK SORT)\n");  
        printf("1. Ascending Data\n");
        printf("2. Descending Data\n");
        printf("3. Random Data\n");
        printf("4. ERROR (EXIT)\n");
        printf("Enter option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter ascending numbers:\n");
            inputArray(A, &n);
            break;
        case 2:
            printf("Enter descending numbers:\n");
            inputArray(A, &n);
            break;
        case 3:
            printf("Enter random numbers:\n");
            inputArray(A, &n);
            break;
        case 4:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid option.\n");
            continue;
        }

        comparisons = 0; // Reset comparisons count
        start = clock();
        quicksort(A, 0, n - 1);
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

        printf("After Sorting: ");
        printArray(A, n);
        printf("Execution Time: %f seconds\n", cpu_time_used);
    }

    return 0;
}
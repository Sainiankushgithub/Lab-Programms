// INSERTION SORT 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 200
int arr[size];
long comparisons=0;

// FILE CREATION 
void createFile(const char*file1,const char* file2,const char*file3)
{
    FILE* fileAsce=fopen(file1,"w");
    FILE* fileDesc=fopen(file2,"w");
    FILE* fileRand=fopen(file3,"w");
    if(fileAsce==NULL || fileDesc==NULL || fileRand==NULL)
    {
        printf("Error! could not open the file to write \n");
        exit(1);
    }
    int min=0, max=5;
    
    // Ascending file
    for(int i=0;i<size;i++)
    {
        fprintf(fileAsce,"%d ",min+rand()%(max-min+1));
        min+=5;
        max+=5;
    }
    printf("Ascending File created Successfully\n");
    
    // Descending file
    for(int i=0;i<size;i++)
    {
        fprintf(fileDesc,"%d ",min+rand()%(max-min+1));
        min-=5;
        max-=5;
    }
    printf("Descending File Created Successfully\n");
    
    // Random file
    for(int i=0;i<size;i++)
    {
        fprintf(fileRand,"%d ",rand()%(50+1));
    }
    printf("Random File Created Successfully\n");
    fclose(fileAsce);
    fclose(fileDesc);
    fclose(fileRand);
}

// INSERTION SORT
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            comparisons++;  // Count each comparison
        }
        arr[j + 1] = key;
    }
}

// DATA STORING IN ARRAY FOR TASK THEN STORING IN OUTPUT FILE 
void storeFileData(const char*file1,const char * file2)
{
    FILE* fileinput=fopen(file1,"r");
    FILE* fileoutput=fopen(file2,"w");
    if(fileinput==NULL || fileoutput==NULL)
    {
        printf("Error! could not open the file to write or read\n");
        exit(1);
    }
    int ele,i=0;
    while(fscanf(fileinput,"%d ",&ele)!=EOF)
    {
        arr[i++]=ele;
    }
    comparisons=0;
    insertionSort(arr, size); // Use insertion sort here

    for(int i=0;i<size;i++)
    {
        fprintf(fileoutput,"%d ",arr[i]);
    }
    fclose(fileinput);
    fclose(fileoutput);
}

// DISPLAY THE CONTENT OF THE FILE 
void display(const char*fileName)
{
    FILE* file=fopen(fileName,"r");
    if(file==NULL)
    {
        printf("Error! could not open the file %s to read \n", fileName);
        exit(1);
    }
    int num;
    while(fscanf(file,"%d ",&num)!=EOF)
    {
        printf("%d ",num);
    }
    printf("\n");
    fclose(file);
}

int main()
{
    createFile("inAsce.dat","inDesc.dat","inRand.dat");
    printf("MAIN MENU (INSERTION SORT)\n");
    printf("1. Ascending Data\n2. Descending Data\n3. Random Data\n4. Exit\n");
    int choice;
    do
    {
        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Before sorting\n");
                display("inAsce.dat");
                clock_t start = clock();
                storeFileData("inAsce.dat", "outInsertionAsce.dat");
                clock_t end = clock();
                double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC * 1e9;
                printf("After sorting\n");
                display("outInsertionAsce.dat");
                printf("Number of comparisons: %ld\n", comparisons);
                printf("Execution time: %.0f nanoseconds\n", elapsed_time);
                break;
            }
            case 2:
            {
                printf("Before sorting\n");
                display("inDesc.dat");
                clock_t start = clock();
                storeFileData("inDesc.dat", "outInsertionDesc.dat");
                clock_t end = clock();
                double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC * 1e9;
                printf("After sorting\n");
                display("outInsertionDesc.dat");
                printf("Number of comparisons: %ld\n", comparisons);
                printf("Execution Time: %.0f nanoseconds\n", elapsed_time);
                break;
            }
            case 3:
            {
                printf("Before sorting\n");
                display("inRand.dat");
                clock_t start = clock();
                storeFileData("inRand.dat", "outInsertionRand.dat");
                clock_t end = clock();
                double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC * 1e9;
                printf("After sorting\n");
                display("outInsertionRand.dat");
                printf("Number of comparisons: %ld\n", comparisons);
                printf("Execution Time: %.0f nanoseconds\n", elapsed_time);
                break;
            }
            case 4:
            {
                printf("Exiting...\n");
                break;
            }
            default:
            {
                printf("Invalid entry! Please enter a valid option.\n");
                break;
            }
        }
    } while (choice != 4);

    return 0;
}

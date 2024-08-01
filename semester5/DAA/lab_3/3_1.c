#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10
int arr[size];
long comparsion=0;
// FILE CREATION 
void createFile(const char*file1,const char* file2,const char*file3)
{
  FILE* fileAsce=fopen(file1,"w");
  FILE* fileDesc=fopen(file2,"w");
  FILE* fileRand=fopen(file3,"w");
  if(fileAsce==NULL || fileDesc==NULL || fileRand==NULL)
  {
    printf("Error ! could open the file to write \n");
    exit(1);
  }
  int min=0,max=5;
  for(int i=0;i<size;i++)
  {
    fprintf(fileAsce,"%d ",min+rand()%(max-min+1));
    min+=5;
    max+=5;
  }
  printf("Ascending File created Successfully\n");
  for(int i=0;i<size;i++)
  {
    fprintf(fileDesc,"%d ",min+rand()%(max-min+1));
    min-=5;
    max-=5;
  }
  printf("Descending File Created Successfully\n");
  for(int i=0;i<size;i++)
  {
    fprintf(fileRand,"%d ",rand()%(50+1));
  }
  printf("Random File Created Successfully\n");
  fclose(fileAsce);
  fclose(fileDesc);
  fclose(fileRand);
}

// MERGE  
void merge(int arr[],int low,int mid,int high)
{
  int n1=mid-low+1;
  int n2=high-mid;
  int left[n1];
  int right[n2];
  for(int i=0;i<n1;i++)
  {
    left[i]=arr[low+i];
  }
  for(int i=0;i<n2;i++)
  {
    right[i]=arr[mid+i+1];
  }
  int i=0,j=0,k=low;
  while(i<n1 && j<n2)
  {
    comparsion++;
    if(left[i]<right[j])
    {
      arr[k]=left[i];
      i++;
    }
    else
    {
      arr[k]=right[j];
      j++;
    }
    k++;
  }
  while(i<n1)
  {
    arr[k++]=left[i++];
  }
  while(j<n2)
  {
    arr[k++]=right[j++];
  }
}
// MERGE SORT 
void mergeSort(int arr[],int low,int high)
{
  if(low<high)
  {
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
  }
}
// DATA STORING IN ARRAY FOR TASK THEN STORING IN OUTPUT FILE 
void storeFileData(const char*file1,const char * file2)
{
  FILE* fileinput=fopen(file1,"r");
  FILE* fileoutput=fopen(file2,"w");
  if(fileinput==NULL && fileoutput==NULL)
  {
    printf("Error ! could not open the file to write or read\n");
    exit(1);
  }
  int ele,i=0;
  while(fscanf(fileinput,"%d ",&ele)!=EOF)
  {
    arr[i++]=ele;
  }
  comparsion=0;
  mergeSort(arr,0,size-1);
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
    printf("Error ! could not open the file %s to read \n");
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
int  main()
{
  createFile("inAsce.dat","inDesc.dat","inRand.dat");
  printf("MAIN MENU (MERGE SORT)\n");
  printf("1.Ascending Data\n2.Descending Data\n3.Random Data\n4. Exit\n");
  int choice;
  do
  {
    printf("Enter the choice :\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      {
        printf("Before sorting \n");
        display("inAsce.dat");
        clock_t start=clock();
        storeFileData("inAsce.dat","outMergeAsce.dat");
        clock_t end=clock();
        double elapsed_time=(double)(end-start)/CLOCKS_PER_SEC * 1e9;
        printf("After sorting \n");
        display("outMergeAsce.dat");
        printf("Number of comparsion : %ld\n",comparsion);
        printf("Execution time : %.0f nanoseconds\n",elapsed_time);
        break;
      }
      case 2:
      {
        printf("Before sorting \n");
        display("inDesc.dat");
        clock_t start=clock();
        storeFileData("inDesc.dat","outMergeDesc.dat");
        clock_t end=clock();
        double elapsed_time=(double)(end-start)/CLOCKS_PER_SEC *1e9;
        printf("After sorting \n");
        display("outMergeDesc.dat");
        printf("Number of comparsion : %ld\n",comparsion);
        printf("Execution Time : %.0f nanoseconds\n",elapsed_time);
        break;
      }
      case 3:
      {
        printf("Before sorting \n");
        display("inRand.dat");
        clock_t start=clock();
        storeFileData("inRand.dat","outMergeRand.dat");
        clock_t end=clock();
        double elapsed_time=(double)(end-start)/CLOCKS_PER_SEC *1e9;
        printf("After sorting \n");
        display("outMergeRand.dat");
        printf("Number of comparsion : %ld\n",comparsion);
        printf("Execution Time : %.0f nanoseconds\n",elapsed_time);
        break;
      }
      case 4:
      {
        printf("Exiting.......\n");
        break;
      }
      default:
      {
        printf("Invalid entry !!!! Please Enter a valid option\n");
        break;
      }
    }
  } while (choice!=4);
  return 0;
}
// QUICK SORT 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void crateFile(const char*fileName1,const char*fileName2 ,const char*fileName3)
{
  FILE * file1=fopen(fileName1,"w");
  FILE * file2=fopen(fileName2,"w");
  FILE * file3=fopen(fileName3,"w");
  if(file1==NULL && file2==NULL && file3==NULL)
  {
    printf("Error ! could not open the file to write \n");
    exit(1);
  }
  int n;
  printf("Enter the number of entries you want to store in a file \n");
  scanf("%d",&n);
  srand(time(0));
  for(int i=0;i<n;i++)
  {
    fprintf(file1,"%d ",(i*5)+rand()%6);
  }
  printf("Ascending file created successfully\n");
  for(int i=n;i>=0;i--)
  {
    fprintf(file2,"%d ",(i*5)+rand()%6);
  }
  printf("Descending file created successfully\n");
  for(int i=0;i<n;i++)
  {
    fprintf(file3,"%d ",rand()%51);
  }
  printf("Random file created successfully\n");
  fclose(file1);
  fclose(file2);
  fclose(file3);
}
int main()
{
  crateFile("inQuickAsec.dat","inQuickDesc.dat","inQuickRand.dat");
  printf("Main Menu\n");
  printf("1.Ascending order\n2.Descending order\n3.Random order\n4.Error (Exit)\n");
  int choice;
  do
  {
    printf("Enter the choice :\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      {
        
      }
      case 2:
      {

      }
      case 3:
      {

      }
      case 4:
      {
        printf("Exiting the program\n");
        break;
      }
      default :
      {
        printf("Invalid entry\n");
        break;
      }
    }
  } while (choice!=4);
  
  return 0;
}
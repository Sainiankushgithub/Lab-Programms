/*
Creating the file in ascendig , descending and random order 
*/
#include<stdio.h>
#include<stdlib.h>
#define size 6
void createAsc(const char*fileName,int start,int end)
{
  FILE *file=fopen(fileName,"w");
  if(file==NULL)
  {
    printf("Error ! could not open file %s for writing \n",fileName);
    exit(1);
  }
  for(int i=0;i<size;i++)
  {
    fprintf(file,"%d ",start+rand()%(end-start+1));
    start+=10;
    end+=10;
  }
  fclose(file);
}
void createDesc(const char *fileName,int start ,int end)
{
  FILE *file=fopen(fileName,"w");
  if(file==NULL)
  {
    printf("Error! could not open file %s to read \n",fileName);
    exit(1);
  }
  for(int i=0;i<size;i++)
  {
    fprintf(file,"%d ",start+rand()%(end-start+1));
    start-=5;
    end-=5;
  }
  fclose(file);
}
void display(const char*fileName)
{
  FILE *file=fopen(fileName,"r");
  if(file==NULL)
  {
    printf("Error ! could not open file %s to read \n");
    exit(1);
  }
  int Number;
  while(fscanf(file,"%d ",&Number)!=EOF)
  {
    printf("%d ",Number);
  }
  printf("\n");
}
int main()
{
  createAsc("inAsce.dat",0,5);
  createDesc("inDesc.dat",45,50);
  char file_name[20];
  printf("Enter the file name to display its content\n");
  scanf("%s",&file_name);
  display(file_name);
  return 0;
}
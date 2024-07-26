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

int main()
{
  createAsc("inAsce.dat",0,5);
  createDesc("inDesc.dat",50,45);
  return 0;
}
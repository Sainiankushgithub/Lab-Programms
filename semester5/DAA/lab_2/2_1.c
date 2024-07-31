#include<stdio.h>
#include<stdlib.h>
void createFile(const char * fileName)
{
  FILE* file=fopen(fileName,"w");
  if(file==NULL)
  {
    printf("Error ! could not open the file %s to write \n",fileName);
    exit(1);
  }
  int n;
  printf("how many elements you want to store in file ");
  scanf("%d",&n);
  printf("Enter the elements in a file\n");
  int ele;
  for(int i=0;i<n;i++)
  {
    scanf("%d",&ele);
    fprintf(file,"%d ",ele);
  }
  fclose(file);
}
void createFileOut(const char*file1,const char*file2)
{
  FILE *inputfile=fopen(file1,"r");
  FILE *outputfile=fopen(file2,"w");
  int num;
  while(fscanf(inputfile,"%d",&num)!=EOF)
  {
    char* str=(char*)malloc(2*sizeof(char));
    if(str==NULL)
    {
      printf("Memory Allocation failed\n");
      exit(1);
    }
    strcpy(str,"");
    convertBinary(num,str,0);
    int result=atoi(str);

  }
}
void convertBinary(int num,char *str,int i)
{
  str=(char*)realloc(str,strlen(str)+2);
  if(num<2)
}
int main()
{
  createFile("inDesc.dat");
  createFileOut("inDesc.dat","outDec.dat");
  return 0;
}
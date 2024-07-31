#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void createFile(const char * fileName)
{
  FILE* file=fopen(fileName,"w");
  if(file==NULL)
  {
    printf("Error ! could not open the file %s to write \n",fileName);
    exit(1);
  }
  int n;
  printf("how many elements you want to store in file\n");
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
    char str[17];
    memset(str,'0',16);
    str[16]='\0';
    convertBinary(num,str,15);
    fprintf(outputfile,"The Binary Equivalent of %d is : %s\n",num,str);
  }
  fclose(inputfile);
  fclose(outputfile);
}
void convertBinary(int num,char str[],int index)
{
  if(num<2)
  {
    str[index]='0'+num;
    return;
  }
  convertBinary(num/2,str,index-1);
  str[index]='0'+(num%2);
}
void display(const char*fileName)
{
  FILE*file=fopen(fileName,"r");
  if(file==NULL)
  {
    printf("Error ! could not open file %s to read\n",fileName);
    exit(1);
  }
  char Buffer[256];
  while(fgets(Buffer,sizeof(Buffer),file))
  {
    printf("%s",Buffer);
  }
  fclose(file);
}
int main()
{
  createFile("inDesc.dat");
  createFileOut("inDesc.dat","outBin.dat");
  display("outBin.dat");
  return 0;
}
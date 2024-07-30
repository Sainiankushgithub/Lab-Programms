/*
2.2 Aim of the program: Write a program in C to find GCD of two numbers using recursion. Read all pair of numbers from a file and store the result in a separate file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void createFileIn(const char *fileName,int n)
{
  FILE *file=fopen(fileName,"w");
  if(file==NULL)
  {
    printf("Error ! file could not open to write \n");
    exit(1);
  }
  srand(time(0));
  for(int i=0;i<n*2;i++)
  {
    fprintf(file,"%d ",rand()%50+1);
  }
  fclose(file);
}
void createFileOut(const char*file1,const char *file2)
{
  FILE *inputFile=fopen(file1,"r");
  if(inputFile==NULL)
  {
    printf("Error ! could open file %s \n",file1);
    exit(1);
  }
  FILE *outputFile=fopen(file2,"w");
  if(outputFile==NULL)
  {
    printf("Error ! could not open the file %s to write\n",file2);
    exit(1);
  }
  int num1,num2;
  while(fscanf(inputFile,"%d %d",&num1,&num2)==2)
  {
    int result=gcd_recursion(num1,num2);
    fprintf(outputFile,"The gcd of %d and %d is %d\n",num1,num2,result);
  }
  fclose(inputFile);
  fclose(outputFile);
}
// Algorithm
int gcd_recursion(int a,int b)
{
  if(a==b)
  {
    return a;
  }
  if(a>b)
  {
    return gcd_recursion(a-b,b);
  }
  else{
    return gcd_recursion(a,b-a);
  }
}
void display(const char*fileName)
{
  FILE *file=fopen(fileName,"r");
  if(file==NULL)
  {
    printf("Error ! could not open the file %s to read\n",fileName);
    exit(1);
  }
  char buffer[256];
  while(fgets(buffer,sizeof(buffer),file))
  {
    printf("%s",buffer);
  }
  fclose(file);
}
int main()
{
  int n;
  printf("Enter the number of pair of gcd you wanted to store in a file\n");
  scanf("%d",&n);
  createFileIn("inGCD.dat",n);
  createFileOut("inGCD.dat","outGCD.dat");
  printf("Displaying the content of outputfile\n");
  display("outGCD.dat");
  return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char *str=(char*)malloc(2*sizeof(char));
  if(str==NULL)
  {
    printf("Memory Allocation failed\n");
    exit(1);
  }
  str="";
  strcat(str,"1");
  printf("%s",str);
  return 0;
}
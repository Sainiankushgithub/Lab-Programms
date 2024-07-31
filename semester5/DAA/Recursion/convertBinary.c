#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void convertBinary(int num,char *str)
{
  str=(char*)realloc(str,strlen(str)+2);
  if(num<2)
  {
    strcat(str,"1");
    return;
  }
  convertBinary(num/2,str);
  if(num%2==0)
  {
    strcat(str,"0");
  }
  else
  {
    strcat(str,"1");
  }
}
int main()
{
  char *str=(char*)malloc(2*sizeof(char));
  if(str==NULL)
  {
    printf("Memory Allocation failed\n");
    exit(1);
  }
  strcpy(str,"");
  int num;
  printf("Enter the number to convert it to binary\n");
  scanf("%d",&num);
  convertBinary(num,str);
  int result=(int)strtol(str,NULL,2);
  printf("Binary representation : %d\n",result);
  return 0;
}
#include<stdio.h>
int main(int argc,char*argv[])
{
  int i;  
  if(argc==1)
  {
    printf("No elements to display....\n");
  }
  else
  {
    printf("List of elements are:");

    for(i=1;i<argc;i++)
   {
     printf("%s ",argv[i]);   
   }  
  }
  return 0;
}
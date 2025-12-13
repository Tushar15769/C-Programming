#include<stdio.h>
int main(void)
{
   FILE*fp;
   char ch;
   fp=fopen("D:\\C Programming\\even_odd.txt","r");
   if(fp==NULL)
  {
    printf("File is not present\n");       
  }
   else
    {
      printf("File is opened in read mode\n"); //ensures execution
    }  
    //read and print file content
  while((ch=fgetc(fp))!=EOF)
  {
    printf("%c",ch);
  }
    return 0;
}
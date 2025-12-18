#include<stdio.h>
int main()
{
    
 FILE *fp1,*fp2;
 int ch;

 fp1=fopen("D:\\C Programming\\even_odd.txt","r");
 fp2=fopen("C:\\Users\\Tushar\\OneDrive\\Documents\\output.txt","w");
 
 if(fp1==NULL)
 {
    printf("File not found\n");
    return 1;
 }

 if(fp2==NULL)
 {
    printf("Output file cannot be created\n");
    fclose(fp1);
    return 1;
 }

 while((ch=fgetc(fp1))!=EOF)
  { 
    fputc(ch,fp2);
  }

  fclose(fp1);
  fclose(fp2);

  printf("Copied\n");
  
  return 0;
}
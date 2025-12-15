#include<stdio.h>
#include<stdlib.h>
typedef char* string;
string read(void);
int main(void)
{
  
    string name;
    name=read();
    if(name!=NULL)
    {
    printf("Welcome %s\n",name);
    free(name);
    }
    return 0;
}
  string read(void)
   {
       string name=malloc(50*sizeof(char));
       if(name==NULL)
       {
        return NULL;
       }
       printf("Enter your name:");
       fgets(name,50,stdin);
       return name;
    }

#include<stdio.h>
#include<stdlib.h>
struct Emp{
  int eno;
  char ename[20];
  float esal;
};
void main()
{
struct Emp* ptr;
ptr=(struct Emp*)malloc(sizeof(struct Emp));
if(ptr==NULL)
{
    printf("Out of memory error\n");
}
else
{
    printf("Enter Emp details:");
    scanf("%d\t%s\t%f",&ptr->eno,ptr->ename,&ptr->esal);

    printf("Employee Details:\n"); 
    printf("%d\t%s\t%f",ptr->eno,ptr->ename,ptr->esal);  
}
 free(ptr);
}
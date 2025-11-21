#include<stdio.h>
struct Emp
{
  int eno;
  char ename[20];
  float esal;
};
void main()
{
  struct Emp e={1000,"Shivam",50000};
  printf("Emp details:\n");
  printf("Eno:%d\n",e.eno);
  printf("Ename:%s\n",e.ename);
  printf("Esal:%.2f\n",e.esal);
}

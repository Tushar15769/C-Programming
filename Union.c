#include<stdio.h>
union un{
    short a;
    short b;
};
void main()
{
union un var;
var.a=10;
printf("The value of b is %d\n",var.b);
var.b=20;
printf("The value of a is %d\n",var.a);
}
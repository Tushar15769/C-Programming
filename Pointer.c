#include<stdio.h>
void main()
{
int i=100;
int*ptr;
ptr=&i;
printf("%d\n",i);
printf("%u\n",ptr);
printf("%u\n",&i);
printf("%u\n",&ptr);
printf("%d\n",*ptr);
printf("%d\n",*(&i));
}
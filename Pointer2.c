#include<stdio.h>
struct Emp{
    int eno;
    char ename[20];
    float esal;
};
void main()
{
char *cp;
int *ip;
struct Emp *sep;
printf("size of the char*:%d\n",sizeof(cp));
printf("size of the ip*:%d\n",sizeof(ip));
printf("size of the sep*:%d\n",sizeof(sep));
}
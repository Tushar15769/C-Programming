#include<stdio.h>

void main()
    {
        int age;
      printf("Enter your age=");
      scanf("%d", &age);
     if(age<=0 || age>100)
    printf("Dhang ka age daalo");
    else if(age>=18)
    printf("You are eligible for voting");
    else if(age<18)
    printf("You are not eligible for voting");
    
    }
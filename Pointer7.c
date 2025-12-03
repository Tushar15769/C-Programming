#include<stdio.h>
#include<stdlib.h>
int main(){
  int capacity=5,*stack;

  stack=(int*)malloc(capacity*sizeof(int));
  if(!stack){
    printf("Allocation failed\n");
    return 1;
  }

      capacity++;

  int*temp=realloc(stack,capacity*sizeof(int));
  if(!temp){
    printf("Reallocation failed\n");
    free(stack);
    return 1;
  }
   stack=temp;

   printf("Memory reallocated to %d integers\n",capacity);
  free(stack);
}
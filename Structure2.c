#include<stdio.h>
struct student{
   int sno;
   char sname[20];
   int smarks[4];
};
void main(){
struct student s[3];    
 int i,j;
for(i=0;i<3;i++){
    printf("Enter the details for student %d\n",i+1);

    printf("Enter student's roll no\n");
    scanf("%d",&s[i].sno);

    printf("Enter student's name\n");
    scanf("%s",s[i].sname);

    printf("Enter 4 subject marks:\n");
   for(j=0;j<4;j++){
   scanf("%d",&s[i].smarks[j]);
  }
}
 
printf("----Students details----\n");


 for(i=0;i<3;i++){
printf("Student %d:\n",i+1);
printf("Student Roll Number:%d\n",s[i].sno);
printf("Student Name:%s\n",s[i].sname);

printf("Marks\n");
for(j=0;j<4;j++){
  printf("%d\n",s[i].smarks[j]);
  }
  printf("\n");
   }
}
#include<stdio.h>
   void main()
   {
      int Maths,English,History,Science,Hindi,Avg;
      printf("Enter your marks in Maths=");
      scanf("%d",&Maths);
      
      printf("Enter your marks in English=");
      scanf("%d",&English);

      printf("Enter your marks in History=");
      scanf("%d",&History);

      printf("Enter your marks in Science=");
      scanf("%d",&Science); 

      printf("Enter your marks in Hindi=");
      scanf("%d",&Hindi);

      Avg=Maths+English+History+Science+Hindi/5;

      if(English>=40 && Maths>=40 && History>=40 && Science>=40 && Hindi>=40)
      printf("Pass");
      
      else if(Avg>75)
      printf("Grade is distinguished");

      else if(Avg>=60 && Avg<75)
      printf("First division");

      else if(Avg>=50 && Avg<60)
      printf("Second Division");

      else if(Avg>=40 && Avg <50)
      printf("Third division");

      else
      printf("Fail");
   }
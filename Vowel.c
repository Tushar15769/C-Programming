#include<stdio.h>
#include<ctype.h>
    int main()
    {
      char ch;
      printf("Enter an alphabet:");
      scanf("%c",&ch);
      ch=tolower(ch);
      switch(ch)
      {
      case 'a': case 'e': case 'i': case 'o': case'u':
      printf("Vowel");
      break;
      default:
         printf("consonant");
         break;
      }
     return 0;    
    }
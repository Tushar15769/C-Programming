#include <stdio.h>
#include <string.h>
int main()
{
    int x;
    char s[10], temp[10];
    printf("Enter the string:");
    gets(s);
    strcpy(temp, s);
    strrev(s);
    x = strcmp(s, temp);

    if (x==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}
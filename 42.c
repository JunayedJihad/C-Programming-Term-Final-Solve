#include <stdio.h>
int main()
{
     char ch;
     printf("Enter a character: ");
     scanf(" %c", &ch);

     switch (ch >= 97 && ch <= 122)
     {
     case 1:
          printf("%c", ch - 32);
          break;
     case 0:
          printf("%c", ch);
          break;
     }
     return 0;
}
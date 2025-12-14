#include <stdio.h>
int main()
{
     char ch;
     printf("Enter a character: ");
     scanf(" %c", &ch);

     switch ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'))
     {
     case 1:
          switch (ch)
          {
          case 'a':
          case 'e':
          case 'i':
          case 'o':
          case 'u':
          case 'A':
          case 'E':
          case 'I':
          case 'O':
          case 'U':
               printf("vowel\n");
               break;
          default:
               printf("consonant\n");
          }
          break;
     default:
          printf("Not an alphabet.");
     }
     return 0;
}

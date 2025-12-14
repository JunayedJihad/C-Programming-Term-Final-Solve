#include <stdio.h>
int main()
{
     char ch;
     printf("Enter a character: ");
     scanf(" %c", &ch);

     if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
     {
          if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
          {
               if (ch >= 65 && ch <= 90)
                    printf("Vowel in capital");
               else
                    printf("Vowel in small");
          }
          else
          {
               if (ch >= 65 && ch <= 90)
                    printf("Consonant in capital");
               else
                    printf("Consonant in small");
          }
     }
     else
     {
          printf("Neither vowel nor consonant");
     }
     return 0;
}
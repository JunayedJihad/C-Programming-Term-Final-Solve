#include <stdio.h>
int main()
{
     char ch, result;
     printf("Enter an uppercase letter: ");
     scanf(" %c", &ch);

     int initial_position, final_position;
     initial_position = ch - 65;
     final_position = (initial_position + 2) % 26;

     result = (char)(65 + final_position + 32);
     printf("Output: %c", result);

     return 0;
}
#include <stdio.h>

int main() {
    unsigned int num;

    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    // A number is a multiple of 4 if its last 2 bits are 0
    // We use bitwise AND with 3 (binary: 11) to check the last 2 bits

    if ((num & 3) == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}

/*
EXAMPLE 01:
Step 1: Convert to binary
8 in decimal = 1000 in binary

Step 2: Perform num & 3
    1000  (8 in binary)
  & 0011  (3 in binary)
  ------
    0000  (result = 0)

Step 3: Check result
Result is 0 → Last 2 bits are 00 → Multiple of 4 → Print "YES"
--------------------------------------------------------------------------------------------------
EXAMPLE 02:
Step 1: Convert to binary
19 in decimal = 10011 in binary

Step 2: Perform num & 3
    10011  (19 in binary)
  & 00011  (3 in binary)
  -------
    00011  (result = 3, which is non-zero)

Step 3: Check result
Result is 3 (non-zero) → Last 2 bits are 11 → NOT a multiple of 4 → Print "NO"
*/
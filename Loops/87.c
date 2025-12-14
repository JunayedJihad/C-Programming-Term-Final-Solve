#include <stdio.h>
int main() {
     long long int id, original;
     printf("Enter the 9-digit student number: ");
     scanf("%lld", &id);
     original = id;

     int count = 0;
     while(id != 0){
          count ++;
          id /= 10;
     }
     if(count != 9) {
          printf("INVALID STUDENT ID !!!");
          return -1;
     }

     id = original;
     int roll = id % 1000;
     id /= 1000;

     int code = id % 100;
     id /= 100;

     int year = id;
     printf("Year: %d, Dept: %02d, Roll: %03d", year, code, roll);

     return 0;
}
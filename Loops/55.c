#include <stdio.h>
int main()
{
     int p, q;

     // METHOD 1
     //  while(1){
     //       if(p==0 && q==0) break;
     //       printf("Enter two integers: ");
     //       scanf("%d%d", &p, &q);
     //       printf("p x q = %d\n", p*q);
     //  }

     // METHOD 2
     do
     {
          printf("Enter two integers: ");
          scanf("%d%d", &p, &q);
          printf("p x q = %d\n", p * q);
     } while ((p != 0) || (q != 0));

     //....NOTE....
     /*
          To stop loop: (p==0 && q==0)
          To run loop: !(p==0 && q==0) ----> (p!=0 || q!=0)
     */

     return 0;
}
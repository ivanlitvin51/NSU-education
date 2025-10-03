#include <stdio.h>
 int main(void) {
    int a, b, umn, ost1, ost2;

    scanf("%d %d", &a, &b);
    umn = a * b;

    printf("Умножение: %d\n", umn);
    if (a == 0) {
      ost2 = 0;
      printf("Остаток 1: %d\nОстатка 2 нет", ost2);
    } else if (b == 0) {
      ost1 = 0;
      printf("Остатка 1 нет\nОстаток 2: %d", ost1);
    } else {
    ost1 = a % b;
    ost2 = b % a;
    printf("Остаток 1: %d\nОстаток 2: %d", umn, ost1, ost2); 
   }

   return 0;
   }

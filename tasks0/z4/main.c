#include <stdio.h>

 int main(void) {
    int a, b, del;
    scanf("%d %d", &a, &b);
    if (b == 0) {
      printf("Деления нет\n");
    } else {
      del = a / b;
      printf("Деление: %d\n", del);
    }
    float sr = (a+b)/2.0;
    printf("Ср. арифметическое: %.2f", sr);
    return 0;
 }

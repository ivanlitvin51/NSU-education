#include <stdio.h>

int main(void) {
    int a, sum = 0;
    scanf("%d", &a);
    for (int i = 0; i<=a; i++) {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
#include <stdio.h>

int isLeap(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int daysInMonth(int y, int m) {
    const int d[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (m == 2) {
        return d[2] + isLeap(y);
    }
    return d[m];
}

int main(void) {
    int D, M, Y, K;
    scanf("%d %d %d %d", &D, &M, &Y, &K);

    while (K > 0) {
        int curDaysInMonth = daysInMonth(Y, M);
        int rem = curDaysInMonth - D; 
        if (K <= rem) {
            D += K;
            K = 0;
        } else {
            K -= (rem + 1);
            D = 1;
            M++;

            if (M > 12) { 
                M = 1; Y++; 
            }
        }
    }

    printf("%d %d %d\n", D, M, Y);
    return 0;
}
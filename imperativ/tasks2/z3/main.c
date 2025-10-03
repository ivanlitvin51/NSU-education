#include <stdio.h>

int main(void) {
    int n;
    double otr = 0,
    zer = 0,
    pol = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        long double x;
        scanf("%Lf", &x);
        if (x < 0) {
            otr++;
        } else if (x == 0) {
            zer++;
        } else if (x > 0) {
            pol++;
        }
    }
    long double ansOtr = otr / n;
    long double ansZer = zer / n;
    long double ansPol = pol / n;
    printf("%.5Lf %.5Lf %.5Lf", ansOtr, ansZer, ansPol);
}
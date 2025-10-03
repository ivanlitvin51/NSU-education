#include <stdio.h>

int main(void) {
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    int n, min = 99999999, max = -99999999, nmin = 1, nmax = 1;

    fscanf(in, "%d", &n);
    for (int i = 0; i < n; i++) {
        int x;
        fscanf(in, "%d", &x);
        if (x < min) {
            min = x;
            nmin = i + 1;
        }
        if (x > max) {
            max = x;
            nmax = i + 1;
        }
    }

    fprintf(out, "%d %d %d %d", min, nmin, max, nmax);

    return 0;
}
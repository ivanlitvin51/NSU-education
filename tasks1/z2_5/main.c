#include <stdio.h>

int main(void) {
    FILE *in, *out;
    int a, b;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%d %d", &a, &b);
    int ch1, ch2, ch3, ost;
    if (a>0 && a % b != 0) {
        ch1 = a/b;
        ch2 = a/b+1;
        ch3 = a/b;
        ost = a % b;
    } else if (a < 0 && a % b != 0) {
        ch1 = a/b-1;
        ch2 = a/b;
        ch3 = a/b;
        ost = a % b + b;
    } else {
        ch1 = a/b;
        ch2 = a/b;
        ch3 = a/b;
        ost = a % b;
    }
    fprintf(out, "%d %d %d %d", ch1, ch2, ch3, ost);

    fclose(in);
    fclose(out);

    return 0;
}
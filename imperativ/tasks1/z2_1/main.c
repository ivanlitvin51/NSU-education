#include <stdio.h>

int main(void) {
    FILE *in, *out;
    int a, sum = 0;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%d", &a);

    for (int i = 0; i < a; i++) {
        int b;
        fscanf(in, "%d", &b);
        if (b % 2 != 0) {
            sum += b;
        }
    }

    fprintf(out, "%d\n", sum);

    fclose(in);
    fclose(out);

    return 0;
}

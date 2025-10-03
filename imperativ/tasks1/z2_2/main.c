#include <stdio.h>

int main(void) {
    FILE *in, *out;
    int x, y, z, sum, min;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%d %d %d", &x, &y, &z);

    if (x <= 0) {
        fprintf(out, "-1\n");
    } else if (y <= 0) {
        fprintf(out, "-2\n");
    } else if (z <= 0) {
        fprintf(out, "-3\n");
    } else {
        sum = 2 * (x * y + y * z + x * z); // |x|,|y|,|z| ≤ 100, переполнения нет
        fprintf(out, "%d\n", sum);
    }

    fclose(in);
    fclose(out);

    return 0;
}

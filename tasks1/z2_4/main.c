#include <stdio.h>
#include <stdbool.h>
bool isPr(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(void) {
    FILE *in, *out;
    int x;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%d", &x);
    if (isPr(x)) {
    fprintf(out, "YES");
    } else {
        fprintf(out, "NO");
    }

    fclose(in);
    fclose(out);

    return 0;
}

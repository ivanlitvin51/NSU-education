#include <stdio.h>

int main(void) {
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    int h, m, s, k;
    fscanf(in, "%d %d %d %d", &h, &m, &s, &k);

    int total = h * 3600 + m * 60 + s + k;
    h = (total / 3600) % 24;
    m = (total / 60) % 60;
    s = total % 60;
    
    fprintf(out, "%d %d %d", h, m, s);

    return 0;
}
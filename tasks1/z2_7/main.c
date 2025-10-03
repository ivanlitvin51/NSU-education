#include <stdio.h>

int main(void) {
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    int n, m, p, k, l, x = 1;
    
    fscanf(in, "%d", &n);
    fscanf(in, "%d %d %d %d", &m, &p, &k, &l);

    while (1) {
        int min = ((p - 1) * l + k - 1) * x + 1; //начало этажа
        int max = ((p - 1) * l + k - 1) * x + x; //конец этажа
        if (m >= min && m <= max)
            break;
        x++; //сколько квартир на этаже
    }

    int a = (n - 1) / x; //номер этажа внутри всего дома
    int d = a / l + 1; //номер подъезда
    int j = a % l + 1; //номер этажа внутри подъезда

    fprintf(out, "%d %d", d, j);

    fclose(in);
    fclose(out);

    return 0;
}
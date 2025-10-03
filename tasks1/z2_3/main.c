#include <stdio.h>

int main(void) {
    FILE *in, *out;
    int n, sum9 = 0;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        fscanf(in, "%d", &x);

        int cnt9 = 0;
        int x1 = x;
        while (x1>0) {
            if (x1 % 10 == 9) {
                cnt9++;
            }
            x1 /= 10;
        }

        int cnt9m1 = 0;
        x1 = x - 1;
        while (x1 > 0) {
            if (x1 % 10 == 9) {
                cnt9m1++;
            }
            x1 /= 10;
        }

        sum9 += 2 +(cnt9m1 - cnt9);
    }
    
   
    fprintf(out, "%d", sum9);

    fclose(in);
    fclose(out);

    return 0;
}
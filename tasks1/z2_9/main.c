#include <stdio.h>

int main(void) {
    FILE *in, *out;
    int n;
    long long res = 0;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    fscanf(in, "%lld", &n);
    for (int a = 1; a * a * a <= n; a++)
    {
        for (int b = a; a * b * b <= n; b++)
        {
            int cmax = (n / (a * b));
            if (cmax >= b) {
                res += (cmax - b) + 1;
            } else break;
        }
        
    }
    
    

    fprintf(out, "%lld\n", res);

    fclose(in);
    fclose(out);

    return 0;
}

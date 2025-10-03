#include <stdio.h>

int main(void) {
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");
    int n;
    
    fscanf(in, "%d", &n);
    int mas[n];

    for (int i = 0; i < n; i++)
    {
        fscanf(in, "%d", &mas[i]);
    }

    int mas2[n];

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        int x = mas[i];
        for (int j = i + 1; j < n; j++)
        {
            if (x > mas[j]) {
                cnt++;
            }
        }
        mas2[i] = cnt;
        cnt = 0;
        
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(out, "%d ", mas2[i]);
    }

    fclose(in);
    fclose(out);

    return 0;
}
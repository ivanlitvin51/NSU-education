#include <stdio.h>

int main(void) {
    int n;
    scanf ("%d", &n);
    char str[100005];
    scanf("%s", &str);

    int value = 0;
    int pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1') {
            value += (1 << pos);
        }
        pos++;

        if (pos == 8) {
            printf("%d ", value);
            value = 0;
            pos = 0;
        }
        
    } if (pos > 0) {
        printf("%d", value);
    }

    return 0;
}
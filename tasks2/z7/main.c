#include <stdio.h>
#include <string.h>
#include <ctype.h>

char toChar(int i) {
    if (i >= 0 && i <= 9) {
        return '0' + i;
    } else if (i >= 10 && i <= 35) {
        return 'a' + (i - 10);
    }
}

int toValue(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'a' && c <= 'z') {
        return c - 'a' + 10;
    }
}

int main(void) {
    int p, q;
    char N[100];
    scanf("%d %d %s", &p, &q, N);

    long long decimal = 0;
    for (int i = 0; i < strlen(N); i++)
    {
        int value = toValue(N[i]);
        decimal = decimal * p + value;
    }

    char ans[100];
    long long xDecimal = decimal;
    int index = 0;
    while (xDecimal > 0) {
        int rem = xDecimal % q;
        ans[index++] = toChar(rem);
        xDecimal /= q;
    }
    
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", ans[i]);
    }


    return 0;
}
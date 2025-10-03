#include <stdio.h>
#include <math.h>
#include <string.h>

int toHex(char c) {
    if (c >= '0' && c <= '9') {
        return (c - '0');
    } else if (c >= 'A' && c <= 'F') {
        return (c - 'A' + 10);
    } else if (c >= 'a' && c <= 'f') {
            return (c - 'a' + 10);
        }
        return -1;
    }

int main(void) {
    char hex[7];
    scanf("%s", &hex);

    if (strlen(hex) != 6) {
        printf("-1 -1 -1\n");
        return 0;
    }

    int flag = 1;

    int r = 0, g = 0, b = 0;

    for(int i = 0; i < strlen(hex); i++) {
        int value = toHex(hex[i]);
        if (value == -1) {
            flag = 0;
            break;
        }
        if (i < 2) {
            r = r * 16 + value;
        } else if (i < 4) {
            g = g * 16 + value;
        } else {
            b = b * 16 + value;
        }

    }

    if (flag) {
        printf("%d %d %d\n", r, g, b);
    } else {
        printf("-1 -1 -1\n");
    }

    return 0;
}
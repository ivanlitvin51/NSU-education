#include <stdio.h>
#include <string.h>
void reverse (char *s, int n) {
    for (int i = 0; i < n / 2; i++) {
        char tmp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = tmp;
    }
}

int main(void) {
    int N = 0;
    scanf("%d", &N);
    getchar();
    char mas[1000][100];
    for(int i = 0; i < N; i++) {
        fgets(mas[i], sizeof(mas[i]), stdin);
        int len = strcspn(mas[i], "\n");
        reverse(mas[i], len);
    }
    for (int i = 0; i < N; i++) {
        printf("%s", mas[i]);
    }
    return 0;
}
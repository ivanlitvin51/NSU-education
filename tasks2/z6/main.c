#include <stdio.h>

int main(void) {
    int l, r, k;
    scanf("%d %d %d", &l, &r, &k);
    int count = 0;
    int range = r - l + 1;

    for (int i = 1; i <= range; i++) {
        for (int j = l; j <= r; j++) {
            int curCount = 0;
            int cur = j;
            
            while (cur <= r) {
                if (cur >= l) {
                    curCount++;
                }
                cur += i;
            }
            
            if (curCount == k)
                count++;
        }
    }

    printf("%d", count);

    return 0;
}
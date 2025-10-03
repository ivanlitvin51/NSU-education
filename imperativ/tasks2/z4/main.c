#include <stdio.h>

int main(void) {
    int a1, a2, b1, b2, c1, c2;
    scanf("%d %d %d %d %d %d", &a1, &a2, &b1, &b2, &c1, &c2);

    int flag = 0;

    for (int ra = 0; ra < 2; ra++) {
        int aw, ah;
        if (ra == 0) {
            aw = a1;
            ah = a2;
        } else {
            aw = a2;
            ah = a1;
        }

        for (int rb = 0; rb < 2; rb++) {
            int bw, bh;
            if (rb == 0) {
                bw = b1;
                bh = b2;
            } else {
                bw = b2;
                bh = b1;
            }

            for (int rc = 0; rc < 2; rc++) {
                int cw, ch;
                if (rc == 0) {
                    cw = c1;
                    ch = c2;
                } else {
                    cw = c2;
                    ch = c1;
                }

                if (bw + cw <= aw && bh <= ah && ch <= ah) {
                    flag = 1;
                }
                if (bh + ch <= ah && bw <= aw && cw <= aw) {
                    flag = 1;
                }
            }
        }
    }

    if (flag == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
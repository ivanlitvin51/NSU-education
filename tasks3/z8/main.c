#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int h[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }

    int l = 0, r = n - 1;
    int lMax = 0, rMax = 0;
    long long res = 0;

    while (l <= r) { // пока границы не будут равны
        if (lMax <= rMax) { // вода ограничена слева (минимум слева)
            if (h[l] < lMax) // если стенка ниже макс - над ней есть вода
                res += (long long)(lMax - h[l]); // прибавляем в результат
            else
                lMax = h[l]; // нашли стенку больше, перезаписываем
            l++;
        } else { // аналогично для границы справа
            if (h[r] < rMax) // считаем кол-во воды над нашей стенкой меньше макс справа
                res += (long long)(rMax - h[r]);
            else
                rMax = h[r]; // нашли стенку больше, перезаписываем
            r--;
        }
    }

    printf("%lld\n", res);
    return 0;
}
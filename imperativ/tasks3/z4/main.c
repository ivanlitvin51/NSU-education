#include <stdio.h>

int main(void) {
    int N = 0;
    scanf("%d", &N);
    int mas[10000];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &mas[i]);
    }
    int curL = 0;
    int curSum = 0;
    int bestSum = mas[0]; // начинаем с 1 эл-та массива на случай если все элементы отрицательные
    int bestL = 0;
    int bestR = 0;
    for (int i = 0; i < N; i++)
    {   
        curSum += mas[i]; // суммируем элементы
        if (curSum == 0) {
            curL = i + 1; // если сумма обратилась в 0 -> идем к след элементу
        }
        if (curSum > bestSum || (curSum == bestSum && (curL < bestL || (curL == bestL && i < bestR)))) { // ищем макс сумму и определяем лучшие границы
            bestSum = curSum;
            bestL = curL;
            bestR = i;
        }
        if (curSum < 0) { // если сумма меньше нуля - идем к следующему жлементу
            curSum = 0;
            curL = i + 1;
        }

    }
    printf("%d %d %d", bestL, bestR, bestSum);

    return 0;
}
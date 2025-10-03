#include <stdio.h>

#define MAXV 100000 // максимальный размер массива

int main(void) {
    int inA[MAXV + 1] = {0}; // массивы с индикаторами нахождений чисел в массиве А и В
    int inB[MAXV + 1] = {0};

    int N1, N2, x;

    scanf("%d", &N1);
    for (int i = 0; i < N1; i++) {
        scanf("%d", &x);
        if (0 <= x && x <= MAXV) inA[x] = 1; // если находим x - отмечаем его 1
    }

    scanf("%d", &N2);
    for (int i = 0; i < N2; i++) {
        scanf("%d", &x);
        if (0 <= x && x <= MAXV) inB[x] = 1; // аналогично для В
    }

    int count = 0;
    for (int v = 0; v <= MAXV; v++) { // проверяем есть ли одинаковые числа в А и В и считаем сколько таких нету
        if (inA[v] && !inB[v]) count++;
    }
    printf("%d\n", count); // выводим количество несовпадений

    for (int v = 0; v <= MAXV; v++) {
        if (inA[v] && !inB[v]) { // выводим несовпадения
            printf("%d ", v);
        }
    }

    return 0;
}
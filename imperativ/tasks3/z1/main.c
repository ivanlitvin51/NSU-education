#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int mas[105];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mas[i]);
    }

    int mas2[105];

    for (int i = 0; i < n; i++) 
    {
        int cnt = 0;
        for (int j = i + 1; j < n; j++) // сравниваем эл-т массива со следующими и считаем кол-во случаев, когда он больше
        {
            if (mas[i] > mas[j]) {
                cnt++;
            }
        }
        mas2[i] = cnt; // записываем кол-во превосходств в отдельный массив с учетом индексации
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", mas2[i]);
    }

    return 0;
}
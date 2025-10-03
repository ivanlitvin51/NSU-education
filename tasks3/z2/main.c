#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int mas[1000005];
    for (int i = 0; i < N; i++) {
        scanf("%d", &mas[i]);
    }

    int index = 0; // вводим индексацию
    for (int i = 0; i < N; i++)
    {
        int sum = 0; // сумма
        index = i + 1; 
        for (int j = i; j < N; j += index) { // с шагом = индекс прибавляем в сумму все эл-ты массива и ее
            sum += mas[j];
        }
        printf("%d\n", sum);
    }
    
    return 0;
}
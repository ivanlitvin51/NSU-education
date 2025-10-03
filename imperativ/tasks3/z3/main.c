#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void) {
    int N = 0;
    scanf ("%d", &N);
    int mas[10000];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &mas[i]);
    }
    
    for (int j = 1; j <= 10000; j++) {
        int count = 0;
        for (int i = 0; i < N; i++) // пробегаемся по циклу и ищем нахождения, подсчитываем их и сразу выводим
        {
            if (mas[i] == j) {
                count++;
            }
        }
        if (count != 0) printf("%d: %d\n", j, count);
    }
    

    return 0;
}
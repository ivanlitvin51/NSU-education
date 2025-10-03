#include <stdio.h>

char is_func(int nums[][2], int m) { // проверяем является ли функцией
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (nums[i][0] == nums[j][0] && nums[i][1] != nums[j][1]) {
                return 0;
            }
        }
    }

    return 1;
}

char is_exist(int nums[][2], int n, int m) { // определена ли
    int exist[n];

    for (int i = 0; i < n; i++) {
        exist[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        exist[nums[i][0] - 1] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (!exist[i])
            return 0;
    }

    return 1;
}

char is_injective(int nums[][2], int m) { // инъективна ли
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (nums[i][1] == nums[j][1] && nums[i][0] != nums[j][0]) {
                return 0;
            }
        }
    }

    return 1;
}

char is_surjective(int nums[][2], int n, int m) { // сюръективна ли
    int exist[n];

    for (int i = 0; i < n; i++) {
        exist[i] = 0;
    }

    for (int i = 0; i < m; i++)  {
        exist[nums[i][1] - 1] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (!exist[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int pairs[m][2];

    for (int i = 0; i < m; i++)
        scanf("%d %d", &pairs[i][0], &pairs[i][1]);

    if (!is_func(pairs, m)) {
        printf("0");
        return 0;
    }
    
    printf("1"); // если является функцией то выводим 1, если бы не была - не дошли бы до сюда

    if (is_exist(pairs, n, m)) // вывод
        printf(" 2");
    if (is_injective(pairs, m))
        printf(" 3");
    if (is_surjective(pairs, n, m))
        printf(" 4");
    if (is_injective(pairs, m) && is_surjective(pairs, n, m)) // биективность
        printf(" 5");

    return 0;
}
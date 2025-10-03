#include <stdio.h>

int main(void) {
    char str[1001] = {0};
    fgets(str, sizeof str, stdin);
    char *s = str;

    while(*s) {
        while(*s == ' ' || *s == '\n') { // ищем первую букву слова при помощи указателя на символ строки через *
            s++;
        }

        if (!(*s)) { // ищем конец строки
            break;
        }   

        int len = 0;
        while (*(s + 1) != ' ' && *(s + 1) != '\0' && *(s + 1) != '\n') { // считаем длину слова минус 1
            s++;
            len++;
        }

        if (len == 0){    // если слово состоит из 1 буквы
            printf("%c ", *s);
            s++;
        } else {
            printf("%c%d%c ", *(s - len), len - 1, *s); // вывод формата "1-ая буква, длина строки len, последний символ"
            s++;
        }
    }

    return 0;
}
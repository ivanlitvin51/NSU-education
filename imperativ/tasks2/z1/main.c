#include <stdio.h>
#include <string.h>

int main(void) {
    const char* alldays[7] = {

    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"

    };

    char day[20];
    scanf("%19s", day);
    int found = 0,
    ans = 0;

    for (int i = 0; i < 7; i++) {
        const char *curday = alldays[i];
        int j = 0, 
        ok = 1;

        while (day[j] != '\0') {
            if (curday[j] == '\0' || curday[j] != day[j]) { 
                ok = 0;
                break; 
            }
            j++;
        }
        if (ok) { 
                found++; 
                ans = i + 1; 
            }
    }
    if (found == 0) {
        printf("Invalid");
    } else if (found > 1) {
        printf("Ambiguous");
    } else printf("%d", ans);

    return 0;
}
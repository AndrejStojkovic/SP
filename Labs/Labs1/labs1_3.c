// Labs 1.3 - 24/10/2022
// Да се прочитаат 5 оцени од еден семестар и да се најде аритметичка средина на оцените.

#include <stdio.h>

int main() {
    int n, s = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &n);
        s += n;
    }

    printf("%.2f", s / 5.0);
    return 0;
}

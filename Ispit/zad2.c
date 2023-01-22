// 2. Да се прочитаат знаци од датотека и броевите да се заменат со букви:
// Парен број = X
// Непарен број = Y

#include <stdio.h>

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    // Vasiot kod tuka

    FILE *f = fopen("input.txt", "r");

    char c;

    while(1) {
        c = fgetc(f);
        if(feof(f)) break;

        if(c >= '0' && c <= '9') {
            int n = c - '0';
            c = n % 2 == 0 ? 'X' : 'Y';
        }

        printf("%c", c);
    }

    fclose(f);
    return 0;
}

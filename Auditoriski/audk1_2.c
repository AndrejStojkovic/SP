#include <stdio.h>

int main() {
    char c, prev, p = 0, ct = 0;

    while(scanf(" %c", &c)) {
        if(c < 'a' || c > 'z') break;

        if(!p) {
            p = 1;
            prev = c;
            continue;
        }

        char a = prev < c ? prev : c;
        char b = prev > c ? prev : c;


        for(int i = a + 1; i < b; i++) printf("%c", i);

        if(b - a > 1) {
            printf(" %d\n", (b - a) - 1);
            ct++;
        }

        prev = c;
    }

    printf("%d", ct);
    return 0;
}

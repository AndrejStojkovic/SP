
// 4.3
// Од тастатура се внесуваат цели броеви се додека не се внесе нешто што не е цел број.
// Да се испечати на екран сумата на броевите во кои цифрите се подредени во опаѓачки редослед. Доколку нема такви броеви, да се испечати порака NEMA.

#include <stdio.h>

int main() {
    int n, s = 0;

    while(scanf("%d", &n)) {
        int pom = n;

        int op = 1;
        int prethodna = pom % 10;
        pom /= 10;

        while(pom != 0) {
            if(pom % 10 <= prethodna) {
                op = 0;
                break;
            }

            prethodna = pom % 10;
            pom /= 10;
        }

        if(op) s += n;
    }

    if(!s) printf("NEMA");
    else printf("%d", s);

    return 0;
}

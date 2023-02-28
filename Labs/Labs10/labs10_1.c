// 10.1
// Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што левата и десната половина од стрингот ќе си ги сменат местата. 
// Напомена: Сите тест примери ќе имаат парен број на знаци. 

#include <stdio.h>
#include <string.h>

int main() {
    char tekst[100];
    scanf("%s", tekst);

    int len = strlen(tekst) / 2;

    for(int i = 0; i < len; i++) {
        char temp = tekst[i];
        tekst[i] = tekst[i + len];
        tekst[i + len] = temp;
    }

    printf("%s", tekst);

    return 0;
}

// 10.2
// Од стандарден влез се вчитува бројот N, бројот K и знакот C. Потоа се вчитуваат N текстуални низи (секоја во нов ред). 
// Да се испечатат на екран текстуалните низи кои го содржат знакот C точно K пати без разлика на големината на буквата.
// Ако нема такви низи, да се испечати порака NONE.

#include <stdio.h>
#include <string.h>

int main() {
    int n, k, c, flag = 0;

    scanf("%d%d", &n, &k);
    scanf(" %c", &c);

    char tekst[100];
    
    for(int i = 0; i < n; i++) {
        scanf("%s", tekst);

        int brojach = 0;
        for(int j = 0; j < strlen(tekst); j++) {
            if(tekst[j] == c)
                brojach++;
        }

        if(brojach == k) {
            flag = 1;
            printf("%s", tekst);
        }
    }

    if(!flag) printf("NONE");

    return 0;
}

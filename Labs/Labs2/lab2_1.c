// Labs 2.1 - 31/10/2022
// Од стандарден влез се чита број x. 
// На екран да се испечати 1 ако бројот x x∈(−100,100) ∪ [200,300), a 0 во спротивно.
// Задачата да се реши со логички операции (без if-else).

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int r = (x > -100 && x < 100) || (x >= 200 && x < 300);
    printf("%d", r);
    return 0;
}

// 1. Да се трансформира низа така што парните елементи ќе биде на почеток во низата (во обратен редослед),
// а непарните броеви на крај од низата (после парните, во точен редослед)

// Пример:
// n = 5
// 95 12 50 23 1
// Резултат:
// 50 12 95 23 1

#include <stdio.h>

void transformiraj(int *array, int n) {
    int parni[100], pidx = 0;
    int neparni[100], nidx = 0;

    for(int i = 0; i < n; i++) {
        if(array[i] % 2 == 0)
            parni[pidx++] = array[i];
        else
            neparni[nidx++] = array[i];
    }

    for(int i = 0; i < pidx; i++) {
        array[i] = parni[pidx - i - 1];
    }

    for(int i = 0; i < nidx; i++) {
        array[i + pidx] = neparni[i];
    }
}

int main() {
    int n, array[100];

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    transformiraj(array, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

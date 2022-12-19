// 2.1 - 7

#include <stdio.h>

void premesti(int a[100], int n) {
    int b[100], indeks = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] >= 0) b[indeks++] = a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] < 0) b[indeks++] = a[i];
    }

    for(int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int a[100];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    premesti(a, n);

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

// 2.1 - 6

#include <stdio.h>

int par(int niza[100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(niza[i] > niza[j]) {
                int temp = niza[i];
                niza[i] = niza[j];
                niza[j] = temp;
            }
        }
    }

    int ct = 0, broj = -1;
    for(int i = 1; i < n; i++) {
        if(niza[i - 1] == niza[i]) {
            ct++;
            continue;
        }

        if((ct + 1) % 2 == 0) {
            broj = niza[i - 1];
            break;
        } else {
            ct = 0;
            broj = -1;
        }
    }

    return broj;
}

int main() {
    int n;
    scanf("%d", &n);

    int niza[100];

    for(int i = 0; i < n; i++) {
        scanf("%d", &niza[i]);
    }

    if(par(niza, n) != -1) printf("Najmaliot element koj se pojavuva paren broj pati e %d", par(niza, n));
    else printf("Nitu eden element ne se pojavuva paren broj pati!");

    return 0;
}

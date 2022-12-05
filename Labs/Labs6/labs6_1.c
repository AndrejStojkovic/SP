// 6.1
// Од стандарден влез да се вчита број N и потоа да се вчитаат N елементи во една низа.
// Внесената низа да се трансформира на начин што парните елементи ќе се зголемат за 1, а непарните ќе се намалат за 1.
// Трансформираната низа да се испечати на стандарден излез, така што елементите ќе се одвоени со празно место меѓу нив.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int niza[100];

    if(n > 100) { return 0; }

    for(int i = 0; i < n; i++) {
        scanf("%d", &niza[i]);
        if(niza[i] % 2 == 0) { niza[i]++; }
        else { niza[i]--; }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", niza[i]);
    }

    return 0;
}

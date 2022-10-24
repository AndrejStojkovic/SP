// Labs 1.2 - 24/10/2022
// Да се напише програма во која ќе чита еден број и ќе отпечати најмалиот број
// на банкноти потребни за тој број. 5000, 1000, 500, 100, 50, 10, 5, 2, 1

#include <stdio.h>

int main() {
    int n, vrednosti[9] = {5000, 1000, 500, 100, 50, 10, 5, 2, 1};
    scanf("%d", &n);

    for(int i = 0; i < 9; i++) {
        printf("%d*%d\n", n / vrednosti[i], vrednosti[i]);
        n %= vrednosti[i];
    }

    return 0;
}

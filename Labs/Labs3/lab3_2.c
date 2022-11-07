#include <stdio.h>

int main() {
    int n;
    char tip;
    float ddv = 0.0;

    for(int i = 0; i < 3; i++) {
        scanf("%d %c", &n, &tip);
        if(tip == 'A' || tip == 'a') { ddv += (n * 0.18); }
        else if(tip == 'B' || tip == 'b') { ddv += (n * 0.05); }
    }

    printf("%.2f", ddv);
    return 0;
}

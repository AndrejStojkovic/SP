#include <stdio.h>

int main() {
    int n, r;
    scanf("%d", &n);
    
    int prva = n % 10, vtora = n / 10;
    
    if(prva >= vtora) { r = prva * 10 + vtora; }
    else { r = vtora * 10 + prva; }

    printf("%d", r * r);
    return 0;
}

#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    if(a <= b && a <= c) { printf("1"); }
    if(b <= a && b <= c) { printf("2"); }
    if(c <= a && c <= b) { printf("3"); }

    return 0;
}

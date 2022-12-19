// 8.3
// Да се прочита број N од тастатура. Да се дефинира функција form(int n) што ќе испечати форма од ѕвезди како што е прикажано на сликата.
// За да се освојат сите поени од вежбата, потребно е функцијата form да биде рекурзивна.

// Пример
// Input  Result
//     5  *****
//        ****
//        ***
//        **
//        *

#include <stdio.h>

int form(int n) {
    if(!n) { return; }

    for(int i = 0; i < n; i++) { printf("*"); }
    printf("\n");

    return form(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    form(n);

    return 0;
}

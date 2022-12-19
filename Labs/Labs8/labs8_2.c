// 8.2
// Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви од интервалот [A,B] кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4. 
// Предлог за работа: 
// Да се имплементира функција reverseNumber (int number) која ќе го пресмета обратниот број на определен број number.
// Да се имплементира функција isPalindrome (int number) која ќе врати 1 доколку бројот number е палиндром, а 0 во спротивно
// Да се имплементира функција containsDigits (int number) која ќе врати 1 доколку сите цифри во бројот се 0,1,2,3 или 4, а 0 во спротивно. 
// Да се искористат функциите isPalindrome и containsDigits во main функцијата
// Дополнително: Направете ја функцијата containsDigits рекурзивна.

#include <stdio.h>

int reverseNumber(int number) {
    int r = 0;
    while(number) {
        r = (r * 10) + (number % 10);
        number /= 10;
    }
    return r;
}

int isPalindrome(int number) {
    return number == reverseNumber(number);
}

int containsDigits(int number) {
    if(!number) {
        return 1;
    }

    return number % 10 <= 4 ? containsDigits(number / 10) : 0;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++) {
        if(containsDigits(i) && isPalindrome(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

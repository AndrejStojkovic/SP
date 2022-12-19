// 2.1 - 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char niza[100]) {
    int pos = 0;
    char r[100];

    for(int i = strlen(niza) - 1; i >= 0; i--) {
        r[pos++] = niza[i];
    }

    for(int i = 0; i < strlen(niza); i++) {
        if(niza[i] != r[i]) return 0;
    }

    return 1;
}

int specijalenZnak(char niza[100]) {
    for(int i = 0; i < strlen(niza); i++) {
        if(!isalnum(niza[i]) && !isspace(niza[i])) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int n, znamence = 0, len = -1;
    scanf("%d", &n);

    char niza[100], najgolem[100];

    for(int i = 0; i < n; i++) {
        scanf("%s", niza);

        if(isPalindrome(niza) && specijalenZnak(niza) && (int)strlen(niza) > len) {
            len = strlen(niza);
            strcpy(najgolem, niza);
        }
    }

    printf("%s", len != -1 ? najgolem : "Nema!");

    return 0;
}

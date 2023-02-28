// 10.3
// Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:
// - релативната фреквенција на сите мали букви
// - релативната фреквенција на сите големи букви
// Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие карактер/и со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).

#include <stdio.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int isBukva(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int main() {
    writeToFile();
    
    // vasiot kod ovde
    FILE *f = fopen("text.txt", "r");
    double mali, golemi, vkupno;

    char c;
    
    while((c = fgetc(f)) != EOF){
        
        if(isBukva(c)) {
            if(c >= 'a' && c <= 'z') mali = mali + 1;
            if(c >= 'A' && c <= 'Z') golemi = golemi + 1;
            vkupno++;
        }
        
        //printf("%c", c);
    }
    fclose(f);
    
    printf("%.4f\n%.4f", golemi / vkupno, mali / vkupno);
}

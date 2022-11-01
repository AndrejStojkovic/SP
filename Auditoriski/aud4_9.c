// 4.9
// За даден центар на кружница и нејзин радиус да се одреди низ кои квадранти минува кружницата

#include <stdio.h>
#include <math.h>

int main() {
    float const pi = 3.14159265359;
    int x, y, r;
    scanf("%d %d %d", &x, &y, &r);

    int prv, vtor, tret, chetvrt;
    prv = vtor = tret = chetvrt = 0;

    for(int i = 0; i < 360; i++) {
        float x1 = x + r * sin(i * pi / 180);
        float y1 = y + r * cos(i * pi / 180);

        if(y1 > 0) {
            if(x1 > 0) { prv = 1; }
            else if(x1 < 0) { vtor = 1; }
        } else if(y1 < 0) {
            if(x1 > 0) { chetvrt = 1; }
            else if(x1 < 0) { tret = 1; }
        }
    }

    printf("Kruzhnicata se naogja vo ");

    if(prv && vtor && tret && chetvrt) {
        printf("site 4 kvadranti.");
    } else {
        if(prv) { printf("I "); }
        if(vtor) { printf("II "); }
        if(tret) { printf("III "); }
        if(chetvrt) { printf("IV "); }
        printf("kvadrant(i).");
    }

    return 0;
}

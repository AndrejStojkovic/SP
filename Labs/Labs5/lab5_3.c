// 5.3
// Се внесува време во македонска форма (3 вредности: час - од 0 до 23, минути – од 0 до 59, и секунди – од 0 до 59).
// Да се презентира времето во интернационална форма во која за 0 часот стои 12, од 13 часот до 23 се всушност од 1 до 11,
// а на крајот стои AM доколку времето е претпладне (од 0:00:00 до 11:59:59) и PM доколку времето е попладне (од 12:00:01 до 23:59:59).
// За времето на пладне (12:00:00) после него се печати NOON.

#include <stdio.h>

int main() {
    int h, m, s, znamence = 0;
    scanf("%d %d %d", &h, &m, &s);

    if(h > 12) { h -= 12; znamence = 1; }
    else if(h == 0) { h = 12; }

    printf("%02d:%02d:%02d", h, m, s);

    if(h == 12 && m == 0 && s == 0) { printf("NOON"); return 0; }

    if(znamence) printf("PM");
    else printf("AM");

    return 0;
}

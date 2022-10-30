// 4.3

#include <stdio.h>

int main() {
  int x, y;
  scanf("%d %d", &x, &y);

  printf("Tochkata se naogja vo ");
  if(y > 0) {
    if(x > 0) { printf("I kvadrant"); }
    else { printf("II kvadrant"); }
  } else if(y < 0) {
    if(x > 0) { printf("IV kvadrant"); }
    else { printf("III kvadrant"); }
  }
  
  return 0;
}
// 3.4

#include <stdio.h>

int main() {
  int x, y;
  y = scanf("%d", &x);

  printf("y = %d\n", y);

  // y = 1 za y = scanf("%d", &x);
  // z = 2 za z = scanf("%d %d", &x, &y);

  return 0;
}
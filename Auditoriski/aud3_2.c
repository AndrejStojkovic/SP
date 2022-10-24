// 3.2

#include <stdio.h>

int main() {

  int x, y;
  scanf("%d %d", &x, &y);

  int z = x++ + --y + (x < y);
  printf("x = %d, y = %d, z = %d", x, y, z);

  return 0;
}
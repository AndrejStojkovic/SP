// 4.1

#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Maximum: %d\n", (a > b) ? a : b);
  return 0;
}
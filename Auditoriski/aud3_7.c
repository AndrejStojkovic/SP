// 3.7

#include <stdio.h>

int main() {
  int broj;
  printf("Vnesete go brojot:\n");
  scanf("%d", &broj);

  printf("Najznacajnata cifra e %d, a najmalku znacajnata e %d.\n", broj / 100, broj % 10);
  return 0;
}

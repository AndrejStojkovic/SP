// 2.8

#include <stdio.h>

int main() {

  char c;
  printf("Vnesete golema bukva: ");
  scanf("%c", &c);

  printf("Golema bukva: %c\n", c);
  printf("Mala bukva: ", c + ('a' - 'A'));

  return 0;
}
// 3.1

#include <stdio.h>

int main() {

  char c;
  printf("Vnesete char: ");
  scanf("%c", &c);

  // za bukvi
  int rez1 = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
  printf("%d\n", rez1);

  // za brojki
  int rez2 = (c >= '0' && c <= '9');
  printf("%d\n", rez2);

  return 0;
}
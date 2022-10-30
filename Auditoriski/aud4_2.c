// 4.2

#include <stdio.h>

int main() {
  int godina;
  scanf ("%d", &godina);

  if ((godina % 4 == 0 && godina % 100 != 0) || godina % 400 == 0) {
    printf("%d e prestapna.\n", godina);
  } else {
    printf("%d ne e prestapna.", godina);
  }

  return 0;
}
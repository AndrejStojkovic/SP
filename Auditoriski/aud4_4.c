// 4.4

#include <stdio.h>

int main() {
  int poeni;
  scanf("%d", &poeni);

  int ocena = 5;

  if(poeni < 0 || poeni > 100) {
    printf("Nevaliden broj na poeni!");
    return 0;
  }

  if(poeni > 90) { ocena = 10; }
  else if(poeni > 80) { ocena = 9; }
  else if(poeni > 70) { ocena = 8; }
  else if(poeni > 60) { ocena = 7; }
  else if(poeni > 50) { ocena = 6; }

  printf("Ocena: %d", ocena);

  return 0;
}
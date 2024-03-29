// 12. Задача
// Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри)
// се додекане се внесе нешто различно од број.
// За секој број треба да се најде позицијата (од десно на лево) на првото појавување на
// најголемата цифра во составот на бројот (цифрата на единици се наоѓа на позиција 0).
//
// Потоа, да се испечати статистика за позициите на најдените цифри со максимална вредност во следниот формат:
// [позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]

#include <stdio.h>

int main() {
  int vrednosti[5] = {0, 0, 0, 0, 0};

  while(1) {
    int n, i = 1;

    if(!scanf("%d", &n)) {
      break;
    }

    int najgolem = (n % 10), indeks = 0;
    n /= 10;

    while(n > 0) {
      int d = n % 10;

      if(d > najgolem) {
          najgolem = d;
          indeks = i;
      }

      n /= 10;
      i++;
    }

    vrednosti[indeks]++;
  }

  for(int i = 0; i < 5; i++) {
    printf("%d: %d\n", i, vrednosti[i]);
  }

  return 0;
}

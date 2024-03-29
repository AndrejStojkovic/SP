// 14. Задача
// Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број.
// За секој број треба да се пресмета збирот на цифрата со максимална вредност од претходно внесениот број
// и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри).
//
// За секој внесен број резултатот треба да се испечати во следниот формат:
// [број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]

#include <stdio.h>

int sumaOdCifri(int n) {
  int s = 0;

  while(n > 0) {
    s += (n % 10);
    n /= 10;
  }

  return s;
}

int najgolemaCifra(int n) {
  int s = n % 10;
  n /= 10;

  while(n > 0) {
    if(n % 10 > s) { s = n % 10; }
    n /= 10;
  }

  return s;
}

int main() {
  int n, cifra = 0;
  while(1) {
    if(!scanf("%d", &n)) { break; }
    printf("%d: %d\n", n, sumaOdCifri(n) + cifra);
    cifra = najgolemaCifra(n);
  }

  return 0;
}

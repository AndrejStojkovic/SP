// 2.3

#include <stdio.h>

int main() {
  float a = 5, b = 7.5, c = 10.2;
  float L = a + b + c;
  float s = L / 2;
  float P = s * (s - a) * (s - b) * (s - c);

  print("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
  print("s = %.2f\nL = %.2f\nP = %.2f", s, L, P);

  return 0;
}
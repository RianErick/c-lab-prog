#include <stdio.h>

int main(void) {
  int i;
  float S = 0;
  for (i = 50; i >= 1; i--) {
    S += (float)i / (i + 1);
  }
  printf("O valor de S é: %f\n", S);
  return 0;
}
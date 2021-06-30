#include <stdio.h>

int soma(int a, int b) {
  return a + b;
}

int main() {
  int a, b;
  int s;

  scanf("%d", &a);
  scanf("%d", &b);

  printf("a + b =  %d\n", soma(a,b));

  return 0;
}

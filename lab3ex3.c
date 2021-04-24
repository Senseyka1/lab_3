#include <stdio.h>
#include <math.h>

int main() {
  float x;
  int a,b;

  // Введення
  printf("\nВведіть 2 цілих числа:\n");
  printf("\nВведіть число a: ");
  scanf("%d", &a);
  printf("Введіть число b: ");
  scanf("%d", &b);

  // Обчислення
  if (3 * (pow((float)a,2) - 3*(float)b) == 0) {
    printf("\nВи ввели некоректні значення (виконується ділення на 0)\n");
  }
  else {
    x = (2 * cos((float)a) - pow((float)b,2)) / (3 * (pow((float)a,2) - 3*(float)b));
    printf("\nРезультат: x = %.2f\n", x);
  }
  return 0;
}

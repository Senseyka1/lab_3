#include <stdio.h>
#include <math.h>

int main(){
  int n1, n2, n3, sum;

  // Введення
  printf("Введіть 3 цілі непарні числа: \n");
  printf("Введіть перше число: ");
  scanf("%d", &n1);
  printf("Введіть друге число: ");
  scanf("%d", &n2);
  printf("Введіть третє число: ");
  scanf("%d", &n3);

  if (n1 % 2 == 0 || n2 % 2 == 0 || n3 % 2 == 0) {
    printf("\nОдне або декілька з введиних чисел є парним\n");
  }
  else if (n1 > n2 && n2 > n3) {
      printf("\nЗадані числа утворюють спадну послідовність\n");
      printf("Задані числа: %d, %d, %d\n", n1, n2, n3);
      printf("\nЧисла з протележним знаком до початкових: %d, %d, %d\n", n1*-1, n2*-1, n3*-1);
  }
  else {
    printf("\nЗадані числа не утворюють спадну послідовність\n");
    printf("\nЗадані числа: %d, %d, %d\n", n1, n2, n3);
    sum = pow(n1, 2) + pow(n2, 2) + pow(n3, 2);
    printf("\nСума квадратів заданих чисел: %d", sum);
  }

  return 0;
}

#include <stdio.h>
#include <math.h>

int main(){

  // Оголошення змінних
  float x;
  int m, y, z;

  //Вибір методу
  printf("***********************************\n");
  printf("How you want to run the program?\n");
  printf("***********************************\n\n");
  printf("**********************************************************************\n");
  printf("За допомогою скороченої форми оператора розгалуження (if) - 1 \n");
  printf("За допомогою повної форми оператора розгалуження (if, else, else if) - 2\n");
  printf("Вийти з програми - 3\n");
  printf("**********************************************************************\n\n");

  printf("Ввести: ");
  scanf("%d", &m);

  //За допомогою if
  if (m == 1) {
    //Введення даних
    printf("\nВведіть ціле число y: ");
    scanf("%d", &y);
    printf("Введіть ціле число z: ");
    scanf("%d", &z);

    //Обчислення
    if (y == -2) {
      if ((float)z - (3*(float)y) == 0) {
        printf("\nВи ввели некоректні значення (виконується ділення на 0)\n");
      }
      else if (2 * ((float)z / ((float)z - 3*(float)y)) < 0) {
        printf("\nВи ввели некоректні значення (виконується добування кореня  з від'ємного числа)\n");
      }
      else {
        x = sqrt(2 * ((float)z / ((float)z - 3*(float)y))) - (float)y*(float)z;
        printf("\nВідповідь: %.2f", x);
      }
    }
    if (y == 20) {
      x = (float)y / 2 + 15*z;
      printf("\nВідповідь: %.2f", x);
    }
    if (y == 5) {
      x = (float)y*(float)z - 3*(float)z;
      printf("\nВідповідь: %.2f", x);
    }
    if (y != -2 && y != 20 && y != 5) {
      printf("\nВи ввели некоректне значення y\n");
    }


  }
  //За допомогою if, else if, else
  else if (m == 2) {
    //Введення даних
    printf("\nВведіть ціле число y: ");
    scanf("%d", &y);
    printf("Введіть ціле число z: ");
    scanf("%d", &z);

    //Обчислення
    if (y == -2) {
      if ((float)z - (3*(float)y) == 0) {
        printf("\nВи ввели некоректні значення (виконується ділення на 0)\n");
      }
      else if (2 * ((float)z / ((float)z - 3*(float)y)) < 0) {
        printf("\nВи ввели некоректні значення (виконується добування кореня  з від'ємного числа)\n");
      }
      else {
        x = sqrt(2 * ((float)z / ((float)z - 3*(float)y))) - (float)y*(float)z;
        printf("\nВідповідь: %.2f", x);
      }
    }
    else if (y == 20) {
      x = (float)y / 2 + 15*(float)z;
      printf("\nВідповідь: %.2f", x);
    }
    else if (y == 5) {
      x = (float)y*(float)z - 3*(float)z;
      printf("\nВідповідь: %.2f", x);
    }
    else {
      printf("\nВи ввели некоректне значення y\n");
    }

  }
  return 0;
}

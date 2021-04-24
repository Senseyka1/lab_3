#include <stdio.h>

int main() {
  int n;
  printf("\nЩоб дізнатись початкову та кінцеву зупинку трамваїв в м.Львові\n");
  printf("Введіть число в діапазоні від 1 до 9: ");
  scanf("%d", &n);

  switch (n) {
    case 1: printf("\nЗалізничний вокзал – Центр\n"); break;
    case 2: printf("\nвул. Коновальця – вул. Пасічна\n"); break;
    case 3: printf("\nАквапарк – пл. Соборна\n"); break;
    case 4: printf("\nЗалізничний вокзал — вул. Вернадського\n"); break;
    case 5: printf("\nНа даний момент немає інформації про маршрут трамвая №5\n"); break;
    case 6: printf("\nвул. Миколайчука — ТЦ «Скриня»\n"); break;
    case 7: printf("\nПогулянка — вул. Татарбунарська\n"); break;
    case 8: printf("\nСоборна — вул. Вернадського\n"); break;
    case 9: printf("\nЗалізничний вокзал — вул. Миколайчука\n"); break;
    default: printf("\nВи ввели некоректне значення!\n");
  }


  return 0;
}

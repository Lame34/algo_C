#include <stdio.h>

int main()
{
  int num = 20;
  int num2 = 40;
  float price = 10.99;
  char c = 'c';
  int algo = 15, systeme = 16, sql = 19, merise = 15;
  float moyenne;

  int nbModule = 4;
  int total = algo + systeme + sql + merise;
  moyenne  = total / nbModule;

  printf("Hello World %d \n", num2);

  printf("La valeur de num = %d ,  La valeur de num2 = %i ,  Prix = %.2f,  char value = %c \n", num, num2, price, c);

num = 30;
num2 = 40;
c = 'a';
num = num2;

  printf("New values : La valeur de num = %d ,  La valeur de num2 = %i ,  Prix = %.2f,  char value = %c \n", num, num2, price, c);

  printf("Total PTS Module %i / Nombre Module %d = La Moyenne : %.2f  \n", total, nbModule, moyenne);

  return 0;
}
#include <stdio.h>

#define MAX_AGE 100
#define MIN_AGE 0
#define MAJOR 18

void afficher_resultat(int x);

int calculer_somme(int x, int y);

int est_majeur(int age);

void afficher_age(int age);

int est_plus_grand(int x, int y);

int est_plus_petit(int x, int y);

int est_egal(int x, int y);

int le_plus_grand(int x, int y);

int le_plus_petit(int x, int y);

int est_impaire(int x);

int multiple(int x, int y);

int somme(int n);

int main()
{
  int a = 11;
  int b = 10;
  int c = 5;

  afficher_resultat(calculer_somme(3, 3));

  afficher_resultat(calculer_somme(a, b));

  afficher_age(18);
  afficher_age(17);
  afficher_age(100);
  afficher_age(101);
  afficher_age(-10);

  if (est_plus_grand(a, c) == 1)
    printf("%d est plus grand que %d\n", a, c);

  if (est_plus_petit(c, b) == 1)
    printf("%d est plus petit que %d\n", c, a);

  if (est_egal(a, b) == 1)
    printf("%d est esgal à %d\n", a, b);

  printf("le plus grand entre %d et %d est : %d \n", a, c, le_plus_grand(a, c));

  printf("le plus petit entre %d et %d est : %d \n", a, c, le_plus_petit(a, c));

  if (est_impaire(a) == 0)
    printf("%d est pair \n", a);
  else
    printf("%d est impaire \n", a);

  multiple(2, 58);

  printf("La somme de 10 = %d\n", somme(10));
}

void afficher_resultat(int x)
{
  printf("le résultat est de : %d\n", x);
}

int calculer_somme(int x, int y)
{
  return x + y;
}

int est_majeur(int age)
{
  if (age >= MAJOR && age <= MAX_AGE)
    return 1;
  else if (age < MAJOR && age > MIN_AGE)
    return 0;
  else
    return -1;
}

void afficher_age(int age)
{
  if (est_majeur(age) == 1)
    printf("%d : majeur\n", age);
  else if (est_majeur(age) == 0)
    printf("%d : mineur\n", age);
  else
    printf("%d :erreur\n", age);
}

int est_plus_grand(int x, int y)
{
  if (x > y)
    return 1;
}

int est_plus_petit(int x, int y)
{
  if (x < y)
    return 1;
}

int est_egal(int x, int y)
{
  if (est_plus_grand(x, y) != 1 && est_plus_petit(x, y) != 1)
    return 1;
}

int le_plus_grand(int x, int y)
{
  if (est_plus_grand(x, y) == 1)
    return x;
  else
    return y;
}

int le_plus_petit(int x, int y)
{
  if (est_plus_petit(x, y) == 1)
    return x;
  else
    return y;
}

int est_impaire(int x)
{
  return x % 2;
}

int multiple(int x, int y)
{
  int a = 0;
  while (a <= y)
  {
    printf("%d\n", a);
    a += x;
  }
}

int pair(int x)
{
  x = 0;
  while (x <= 58)
  {
    printf("%d \n", x);
    x = x + 2;
    x++;
  }
}

int impair(int x)
{
  x = 1;
  while (x <= 58)
  {
    printf("%d \n", x);
    x = x + 2;
    x++;
  }
}

int somme(int n)
{
  int sum = 0;
  int i = 0;

  while (i <= n)
  {
    sum = sum + i;
    i = i + 1;
  }
  return sum;
}
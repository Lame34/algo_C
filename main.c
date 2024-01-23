#include <stdio.h>

#define MAX_AGE 100
#define MIN_AGE 0
#define MAJOR 18

int calculer_somme(int x, int y);

void afficher(int x);

int est_majeur(int age);

void afficher_age(int age);

int est_plus_grand(int x, int y);

int est_plus_petit(int x, int y);

int est_egal(int x, int y);

int le_plus_grand(int x, int y);

int le_plus_petit(int x, int y);

int est_impaire(int x);

int main()
{
  int a = 11;
  int b = 10;
  int c = 5;

  printf("Le plus grand entre %d et %d est : %d \n", a, c, le_plus_grand);

  printf("Le plus petit entre %d et %d est : %d \n", a, c, le_plus_petit);

  if (est_impaire(a) == 0)
    printf("%d est paire \n", a);
  else
    printf("%d est impair \n", a);
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
  if (le_plus_grand(x, y) == 1)
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

int calculer_somme(int x, int y)
{
  return x + y;
}

void afficher_resultat(int x)
{
  printf("Le résultat est : %d\n", x);
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
    printf("%d : erreur\n", age);
}

int est_impaire(int x)
{
  return x % 2;
}
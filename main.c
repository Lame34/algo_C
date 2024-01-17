#include <stdio.h>

#define MAX_AGE 100
#define MIN_AGE 0
#define MAJOR 18

int calculer_somme(int x, int y)
{
  return x + y;
}

void afficher(int x)
{
  printf("Le résultat est : %d\n", x);
}







int est_majeur(int age)
{
  if (age >= 18 && age < 100)
    return 1;
  else if (age <= 17 && > 0)
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














int main()
{
  // afficher(calculer_somme(2, 4));
  // afficher_age(18);
  // afficher_age(17);
  // afficher_age(100);
  // afficher_age(-10);
}
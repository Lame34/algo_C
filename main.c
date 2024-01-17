#include <stdio.h>

int calculer_somme(int x, int y)
{
  return x + y;
}

void afficher(int x)
{
  printf("Le résultat est : %d\n", x);
}

int ismajor()
{
  int age = 1;
  if (age > 18) {
    printf("Vous êtes majeur\n");
  } else {
    printf("Vous êtes mineur\n");
  }
}

int main()
{
  afficher(calculer_somme(2, 4));
  ismajor();
}
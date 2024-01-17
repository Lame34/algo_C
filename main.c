#include <stdio.h>

int calculer_somme(int x, int y)
{
  return x + y;
}

void afficher(int x)
{
  printf("Le résultat est : %d\n", x);
}

int main()
{
  afficher(calculer_somme(2, 4));
}
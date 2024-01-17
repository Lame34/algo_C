#include <stdio.h>

int calculer_somme(int x, int y)
{
  int la_somme = 0;
  la_somme = x + y;
}

int afficher()
{
  printf("Le résultat est : %d\n", la_somme);
}


int main()
{
  calculer_somme(5, 10);
  afficher();
}
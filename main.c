// std headers
#include <stdio.h>

// own headers 
#include "functions.h"
#include "arrays_handler.h"


// main function

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

  // if a is greater than b
  if(est_plus_grand(a, c) == 1)
  // display this message 
    printf("%d est plus grand que %d\n", a,c );

  if(est_plus_petit(c, b)== 1)
    printf("%d est plus petit que %d\n",c, a );

  if(est_egal(a, b)==1)
    printf("%d est esgal à %d\n",a, b );

  // display the bigest value 
  printf("le plus grand entre %d et %d est : %d \n", a, c, le_plus_grand(a, c));

  printf("le plus petit entre %d et %d est : %d \n", a, c, le_plus_petit(a, c));

  if(est_impaire(a) == 0)
    printf("%d est pair \n", a);
  else  
    printf("%d est impaire \n", a);


  multiple(5, 30);


  printf("la somme de 3 = %d\n\n" ,somme(3));

  int n = 5; 
  printf("factoriel_recursive : factoriel de %d = %d \n",n, factoriel_recursive(n));
  printf("factoriel_iterative : factoriel de %d = %d \n\n",n, factoriel_iterative(n));
  printf("somme_recursive: somme de %d = %d \n\n",n, somme_recursive(n));
  printf("somme_iterative: somme de %d = %d \n\n",n, somme(n));


  n = 10;
  printf("factoriel_recursive : factoriel de %d = %d \n",n, factoriel_recursive(n));
  printf("factoriel_iterative : factoriel de %d = %d \n\n",n, factoriel_iterative(n));
  printf("somme_recursive: somme de %d = %d \n\n",n, somme_recursive(n));
  printf("somme_iterative: somme de %d = %d \n\n",n, somme(n));

  n = 1; 
  printf("factoriel_recursive : factoriel de %d = %d \n",n, factoriel_recursive(n));
  printf("factoriel_iterative : factoriel de %d = %d \n\n",n, factoriel_iterative(n));
  printf("somme_recursive: somme de %d = %d \n\n",n, somme_recursive(n));
  printf("somme_iterative: somme de %d = %d \n\n",n, somme(n));


  n = 0; 
  printf("factoriel_recursive : factoriel de %d = %d \n",n, factoriel_recursive(n));
  printf("factoriel_iterative : factoriel de %d = %d \n\n",n, factoriel_iterative(n));
  printf("somme_recursive: somme de %d = %d \n\n",n, somme_recursive(n));
  printf("somme_iterative: somme de %d = %d \n\n",n, somme(n));



  int ile_de_france[] = {75, 77, 78, 91, 92, 93, 94, 95};
  int aura[] = {1, 3,  7,  15,  26, 38, 42, 43, 63, 69, 73, 74};


  printf("la liste des département de la région ile de france : ");
  display_int_table(ile_de_france, 8);

  new_line

  printf("la liste des département de région Auvergne-Rhône-Alpes : ");
  display_int_table(aura, 12);

  new_line
  


}	



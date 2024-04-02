#include <stdio.h>
#include "functions.h"

void afficher_resultat(int x)
{
  printf("le résultat est de : %d\n", x);
}

int calculer_somme(int x, int y)
{
  return  x + y;
}

int est_majeur(int age)
{
  if(age >= MAJOR && age <=MAX_AGE)
    return 1;
  else if(age < MAJOR && age > MIN_AGE)
    return 0;
  else  
    return -1;
}

void afficher_age(int age)
{
  if(est_majeur(age)== 1)
    printf("%d : majeur\n", age);
  else if(est_majeur(age)== 0)
    printf("%d : mineur\n", age);
  else
    printf("%d :erreur\n", age); 
}


int est_plus_grand(int x, int y)
{
  if(x > y)
    return 1;
}

// test if x is smaller
int est_plus_petit(int x, int y)
{
  if(x<y)
    return 1;
}

int est_egal(int x, int y)
{
  if(est_plus_grand(x,y) != 1&& est_plus_petit(x, y) !=1)
    return 1;
}

// return max value
int le_plus_grand(int x, int y)
{
  if(est_plus_grand(x,y)==1)
    return x;
  else
    return y;
}

// return min 
int le_plus_petit(int x, int y)
{
  if(est_plus_petit(x, y)==1)
    return x;
  else
    return y;
}

// 
int est_impaire(int x)
{
  return x % 2;
}

int multiple(int x, int y)
{
  int a = 0;
  while(a <= y)
  {
    printf("%d\n", a);
    a+=x;
  }
}

int somme(int n)
{
  int sum = 0,  i = 0;

  while(i<=n)
  {
    sum = sum + i;
    i = i + 1;
  }
  return sum;
}


int factoriel_recursive(int n)
{
  if(n == 0)
    return 1;
  else  
    return n * factoriel_recursive(n - 1);
}

int factoriel_iterative(int n)
{

  if(n == 0)
    return 1;
  
  int factoriel = n;
  
  while(n > 1)
    factoriel *= --n;    

  return factoriel;
}

int somme_recursive(int n)
{
  if(n == 0)
    return n;
  return n + somme_recursive(n - 1);
}
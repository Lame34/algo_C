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

int display_department_noms(int department_number, char *department_noms[], int num_departments) {
    if (department_number >= 1 && department_number <= num_departments) {
        printf("Le nom du département est : %s\n", department_noms[department_number - 1]);
    } else {
        printf("Numéro de département invalide.\n");
    }
}

int getDepartement(int numero) {
    int numeros[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37,
        38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71,
        72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 971, 972, 973, 974, 976};

    char *departements[] = {
        "Ain", "Aisne", "Allier", "Alpes-de-Haute-Provence", "Hautes-Alpes", "Alpes-Maritimes", "Ardèche", "Ardennes", "Ariège", "Aube",
        "Aude", "Aveyron", "Bouches-du-Rhône", "Calvados", "Cantal", "Charente", "Charente-Maritime", "Cher", "Corrèze", "Côte-d'Or", "Côtes-d'Armor", "Creuse", "Dordogne", "Doubs", "Drôme", "Eure", "Eure-et-Loir", "Finistère",
        "Gard", "Haute-Garonne", "Gers", "Gironde", "Hérault", "Ille-et-Vilaine", "Indre", "Indre-et-Loire", "Isère", "Jura",
        "Landes", "Loir-et-Cher", "Loire", "Haute-Loire", "Loire-Atlantique", "Loiret", "Lot", "Lot-et-Garonne", "Lozère", "Maine-et-Loire",
        "Manche", "Marne", "Haute-Marne", "Mayenne", "Meurthe-et-Moselle", "Meuse", "Morbihan", "Moselle", "Nièvre", "Nord",
        "Oise", "Orne", "Pas-de-Calais", "Puy-de-Dôme", "Pyrénées-Atlantiques", "Hautes-Pyrénées", "Pyrénées-Orientales", "Bas-Rhin",
        "Haut-Rhin", "Rhône", "Haute-Saône", "Saône-et-Loire", "Sarthe", "Savoie", "Haute-Savoie", "Paris", "Seine-Maritime", "Seine-et-Marne",
        "Yvelines", "Deux-Sèvres", "Somme", "Tarn", "Tarn-et-Garonne", "Var", "Vaucluse", "Vendée", "Vienne", "Haute-Vienne", "Vosges", "Yonne",
        "Territoire de Belfort", "Essonne", "Hauts-de-Seine", "Seine-Saint-Denis", "Val-de-Marne", "Val-d'Oise", "Guadeloupe", "Martinique",
        "Guyane", "La Réunion", "Mayotte"};

    for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); ++i) {
        if (numeros[i] == numero) {
            printf("Le departement correspondant au numero %d est: %s\n", numero, departements[i]);
            return 1;
        }
    }

    printf("Le numero de departement %d n'est pas reconnu.\n", numero);
    return 0;
}
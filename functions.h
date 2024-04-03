#ifndef FONCTIONS_H
#define FONCTIONS_H

#define MAX_AGE 100
#define MIN_AGE 0
#define MAJOR 18

#define new_line printf("\n");

// display results
void afficher_resultat(int x);

// return the amount 
int calculer_somme(int x, int y);

// test if is major
int est_majeur(int age);

// display age 
void afficher_age(int age);

// test if x is greater than y
int est_plus_grand(int x, int y);

// test if x is smaller than y
int est_plus_petit(int x, int y);

// test if x is equal to y
int est_egal(int x, int y);

// return the bighest value between x and y
int le_plus_grand(int x, int y);

// return the smallest value between x and y
int le_plus_petit(int x, int y);

// 
int est_impaire(int x);

//
int multiple(int x, int y); 

int somme(int n);

int somme_recursive(int n);

int factoriel_recursive(int n);

int factoriel_iterative(int n);

int display_int_table(int t[], int len);

int getDepartement(int numero);

#endif
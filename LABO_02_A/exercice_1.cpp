/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02_a
 Fichier     : exercice_1.cpp
 Auteur(s)   : Thomas Ricci, Eric Bousbaa, Thibaud Franchetti
 Date        : 26.09.2018

 But         : Convertir un nombre entier n d'une base d'affichage définie, 
               vers une base saisie par l'utilisateur.

 Remarque(s) : - Le programme ne teste pas les entrées utilisateur et estime 
 *               qu'elles sont correctes.
               - Si le nombre converti commence par un 0, ce dernier sera tronqué.

 Compilateur : - g++ (Ubuntu 5.4.0-6ubuntu1~16.04.10), 
 *             - Apple LLVM version 9.0.0 (clang-900.0.39.2),
 *             - g++ (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

const int BASE_AFFICHAGE = 10;

int main() {
  
   unsigned int n;
   unsigned long long resultat = 0;
   unsigned int reste = 0;
   unsigned int base_arrivee, compteur = 0;
   
   cout << "Veuillez entrer votre nombre (entre 0 et 1'000'000): ";
   cin >> n;
   cout << endl;
   cout << "Veuillez entrer la base (entre 2 et 9): ";
   cin >> base_arrivee;
   
   int quotient = n;
   
   while (quotient > 0) {
      reste = quotient % base_arrivee;
      quotient = quotient / base_arrivee;
      cout << "blabvla => " << reste * pow(BASE_AFFICHAGE, compteur) << endl;
      resultat += reste * (unsigned long long) pow(BASE_AFFICHAGE, compteur);
      
      compteur++;
   }
   
   cout << fixed;
   cout << "(" << n        << ")" << BASE_AFFICHAGE   << " =  ";
   cout << "(" << resultat << ")" << base_arrivee   << endl;
   
   cout << "Veuillez appuyez sur une touche pour continuer..." << endl;
   cin.get();
   
   return EXIT_SUCCESS;
}

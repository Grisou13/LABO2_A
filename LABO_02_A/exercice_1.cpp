/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02_a
 Fichier     : exercice_1.cpp
 Auteur(s)   : Thomas Ricci, Eric Bousbaa, Thibaud Franchetti
 Date        : 26.09.2018

 But         : Convertir un nombre entier en base 10, 
               vers une base saisi par l'utilisateur.

 Remarque(s) : - Le programme ne tests pas les entrées utilisateur et estime qu'elle sont correct.
               - Si le nombre converti commence par un 0, ce dernier sera tronqué.

 Compilateur : g++ (Ubuntu 5.4.0-6ubuntu1~16.04.10)
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
   
   cout << "Veuillez entrée votre nombre (entre 0 et 1'000'000): ";
   cin >> n;
   cout << endl;
   cout << "Veuillez entrée la base (entre 2 et 9): ";
   cin >> base_arrivee;
   
   int quotient = n;
   
   while(quotient > 0){
      reste = quotient % base_arrivee;
      quotient = quotient / base_arrivee;
      cout << "blabvla => " << reste * pow(BASE_AFFICHAGE, compteur) << endl;
      resultat += reste * (unsigned long long) pow(BASE_AFFICHAGE, compteur);
      
      compteur++;
   }
   
   cout << fixed;
   cout << "(" << n        << ")" << BASE_AFFICHAGE   << " =  ";
   cout << "(" << resultat << ")" << base_arrivee   << endl;
   
   cout << "Veuilleu appuyez sur une touche pour continuer..." << endl;
   cin.get();
   
   return EXIT_SUCCESS;
}

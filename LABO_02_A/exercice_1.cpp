/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02_A
 Fichier     : exercice_1.cpp
 Auteur(s)   : Thomas Ricci, Eric Bousbaa, Thibaud Franchetti
 Date        : 10.10.2018

 But         : Convertir un nombre entier n d'une base d'affichage définie, 
               vers une base saisie par l'utilisateur.

 Remarque(s) : - Le programme ne teste pas les entrées utilisateur et estime 
 *               qu'elles sont correctes.
               - Si le nombre converti commence par un 0, ce dernier sera tronqué.
 * 
 Compilateur : - g++ (Ubuntu 5.4.0-6ubuntu1~16.04.10), 
 *             - Apple LLVM version 9.0.0 (clang-900.0.39.2),
 *             - g++ (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;


int main() {
  
   const int N_MIN = 0,
             N_MAX = 1000000;
   
   const unsigned int BASE_MIN = 2,
                      BASE_MAX = 9,
                      BASE_AFFICHAGE = 10;

   unsigned long long resultat = 0; // Le type unsigned long long est nécessaire à
                                    // l'affichage de n proche de 1E6 en base 2 dans
                                    // un environnement Windows classique de 2018
                                    // avec le compilateur MinGW-g++.
   
   unsigned int n,            // Nombre saisi par l'utilisateur
                quotient,
                base_arrivee, // Base dans laquelle n sera converti
                reste = 0;
   
   cout << "Veuillez entrer un nombre entier (entre " << N_MIN << " et " << N_MAX
        << ") : ";
   cin >> n;
   
   cout << "Veuillez entrer la base (entre " << BASE_MIN << " et " << BASE_MAX
        << ") dans laquelle votre nombre sera converti : ";
   cin >> base_arrivee;
   
   quotient = n;
   int compteur = 0;
   while (quotient > 0) {
      reste = quotient % base_arrivee;
      quotient /= base_arrivee;
      
      // Calcul du (compteur + 1)-ième chiffre depuis la droite dans la base
      // d'arrivée.
      resultat += reste * (unsigned long long) round(pow(BASE_AFFICHAGE, compteur));
      
      compteur++;
   }
   
   cout << "(" << n        << ")" << BASE_AFFICHAGE   << " = ";
   cout << "(" << resultat << ")" << base_arrivee   << endl;
   
   cout << "Veuillez appuyez sur une touche pour continuer..." << endl;
   cin.get();
   
   return EXIT_SUCCESS;
}

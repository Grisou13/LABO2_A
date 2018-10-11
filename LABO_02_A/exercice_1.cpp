/*
 -----------------------------------------------------------------------------------
 Laboratoire : <XX>
 Fichier     : main.cpp
 Auteur(s)   : Thomas Ricci
 Date        : 26.09.2018

 But         : <TODO>

 Remarque(s) : <TODO>

 Compilateur : g++ (Ubuntu 5.4.0-6ubuntu1~16.04.10)
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
   int n,
       base,
       quotient,
       reste = 0,
       resultat = 0;
   
   cout << "Veuillez entrée votre nombre: ";
   cin >> n >> base;
   quotient = n;
   
   int compteur = 0;
   
   while(quotient > 0){
      reste = quotient % base;
      quotient = quotient / base;
      
      resultat += reste * pow(10, compteur);
      
      compteur++;
      
   }
   
   cout << fixed;
   cout << n << " => ";
   cout << "(" << resultat << ")" << base << endl;
   cout << "Veuilleu appuyez sur une touche pour continuer..." << endl;
   cin.get();
   
   return EXIT_SUCCESS;
}

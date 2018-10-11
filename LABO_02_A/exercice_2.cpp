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
  
   const int HAUTEUR = 8;
   const int LARGEUR = 8;
   int nombre;
   cout << "Choisissez nombre entier: ";
   cin >> nombre;
   
   int nombre_x = (nombre - 1) % LARGEUR;
   int nombre_y = (nombre - 1) / LARGEUR;
    
   int sym_horizontale_y = HAUTEUR - nombre_y - 1;
   int sym_horizontale_x = nombre_x;
   cout << "Symetrie horizontale : " << sym_horizontale_y * LARGEUR + sym_horizontale_x + 1 << endl;
   
   int sym_verticale_y = nombre_y;
   int sym_verticale_x = LARGEUR - nombre_x - 1;
   cout << "Symetrie verticale : " << sym_verticale_y * LARGEUR + sym_verticale_x + 1 << endl;
   
   int sym_diag_droite_x = HAUTEUR - nombre_y  - 1;
   int sym_diag_droite_y = LARGEUR - nombre_x - 1;
   cout << "Symetrie diagonale de droite : " << sym_diag_droite_y * LARGEUR + sym_diag_droite_x + 1 << endl;
  
   cout << "Symetrie diagonale de gauche : " << nombre_x * LARGEUR + nombre_y + 1 << endl;
   
   
   return EXIT_SUCCESS;
}

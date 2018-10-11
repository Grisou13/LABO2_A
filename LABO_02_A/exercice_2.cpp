/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02_A
 Fichier     : main.cpp
 Auteur(s)   : Thomas Ricci, Eric Bousbaa, Thibaud Franchetti
 Date        : 26.09.2018

 But         : Demande à l'utilisateur d'entrer un numéro de case d'un damier 
 *             de hauteur et largeur déterminé. Puis, affiche les numéros de cases
 *             des symétries suivantes :
 *                - Symétrie verticale
 *                - Symétrie horizontale
 *                - Symétrie diagonale gauche
 *                - Symétrie diagonale droite.

 Remarque(s) : - Aucun contrôle sur la saisie utilisateur n'est faite.
 *             - Les dimensions du damier peuvent être pair ou impair.
 *             - Les dimensions du damier doivent être égaux.

 Compilateur : - g++ (Ubuntu 5.4.0-6ubuntu1~16.04.10), 
 *             - Apple LLVM version 9.0.0 (clang-900.0.39.2),
 *             - ...
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
   const int COTE = 8;

   int nombre;
   cout << "Choisissez nombre entier: ";
   cin >> nombre;
   
   int nombre_x = (nombre - 1) % COTE;
   int nombre_y = (nombre - 1) / COTE;
    
   int sym_horizontale_y = COTE - nombre_y - 1;
   int sym_horizontale_x = nombre_x;
   cout << "Symetrie horizontale : " << sym_horizontale_y * COTE + sym_horizontale_x + 1 << endl;
   
   int sym_verticale_y = nombre_y;
   int sym_verticale_x = COTE - nombre_x - 1;
   cout << "Symetrie verticale : " << sym_verticale_y * COTE + sym_verticale_x + 1 << endl;
   
   int sym_diag_droite_x = COTE - nombre_y  - 1;
   int sym_diag_droite_y = COTE - nombre_x - 1;
   cout << "Symetrie diagonale de droite : " 
        << sym_diag_droite_y * COTE + sym_diag_droite_x + 1 
        << endl;
  
   cout << "Symetrie diagonale de gauche : " 
        << nombre_x * COTE + nombre_y + 1 
        << endl;
   
   return EXIT_SUCCESS;
}

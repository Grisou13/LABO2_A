/*
 -----------------------------------------------------------------------------------
 Laboratoire : 02_A
 Fichier     : exercice_2.cpp
 Auteur(s)   : Thomas Ricci, Eric Bousbaa, Thibaud Franchetti
 Date        : 17.10.2018

 But         : Demande à l'utilisateur d'entrer un numéro de case d'un damier 
               de hauteur et largeur déterminées puis affiche les numéros des cases
               des symétries suivantes :
                  - Symétrie verticale
                  - Symétrie horizontale
                  - Symétrie diagonale gauche
                  - Symétrie diagonale droite.

 Remarque(s) : - Aucun contrôle sur la saisie utilisateur n'est fait.
               - Le côté du damier peut être pair ou impair.
               - Les diagonales ne faisant pas partie des axes de symétrie d'un 
                 rectangle, le damier doit être carré.

 Compilateur : - g++ (Ubuntu 5.4.0-6ubuntu1~16.04.10), 
               - Apple LLVM version 9.0.0 (clang-900.0.39.2),
               - g++ (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0
 -----------------------------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  
   const int COTE = 8;
   int nombre;
   
   cout << "Choisissez un numero de case entre 1 et " << COTE * COTE << " : ";
   cin >> nombre;
   
   // Passage d'une numérotation "linéaire" des cases à un système de coordonnées
   // dont l'origine est située sur la case en haut à gauche du damier.
   int nombre_x = (nombre - 1) % COTE;
   int nombre_y = (nombre - 1) / COTE;
   
   // Calcul des coordonnés de la case symétrique par rapport à l'axe horizontal.
   int sym_horizontale_y = COTE - nombre_y - 1;
   int sym_horizontale_x = nombre_x;
   // Les coordonnées sont reconverties en un numéro de case avant d'être affichées.
   cout << "Case symetrique par rapport a l'axe horizontal    : " 
        << sym_horizontale_y * COTE + sym_horizontale_x + 1 
        << endl;
   
   // Calcul des coordonnés de la case symétrique par rapport à l'axe vertical.
   int sym_verticale_y = nombre_y;
   int sym_verticale_x = COTE - nombre_x - 1;
   cout << "Case symetrique par rapport a l'axe vertical      : " 
        << sym_verticale_y * COTE + sym_verticale_x + 1 
        << endl;
   
   // Calcul des coordonnés de la case symétrique par rapport à la diagonale droite.
   int sym_diag_droite_x = COTE - nombre_y - 1;
   int sym_diag_droite_y = COTE - nombre_x - 1;
   cout << "Case symetrique par rapport a la diagonale droite : " 
        << sym_diag_droite_y * COTE + sym_diag_droite_x + 1 
        << endl;
   
   // Calcul des coordonnés de la case symétrique par rapport à la diagonale gauche.
   cout << "Case symetrique par rapport a la diagonale gauche : " 
        << nombre_x * COTE + nombre_y + 1 
        << endl;
   
   cout << "Appuyez sur une touche pour continuer..." << endl;
   cin.get();
   
   return EXIT_SUCCESS;
}

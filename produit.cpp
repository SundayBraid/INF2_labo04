/*
 -----------------------------------------------------------------------------------
 Laboratoire : 04
 Fichier     : produit.cpp
 Auteur(s)   : Thibaud Franchetti, Sacha Perdrizat
 Date        : 08.04.2019

 But         : Implémente la classe Produit déclarée dans produit.h

 Remarque(s) : - Il aurait été préférable d'initialiser la donnée membre privée 'no'
                 après le possible lancement d'une exception, malheureusement
                 ceci est impossible.

 Compilateur : GCC-g++ 7.3.0
               GCC-g++ 8.2.0
 -----------------------------------------------------------------------------------
*/

#include "produit.h"
#include "exceptions.h"
#include <iomanip>

using namespace std;

const double Produit::PRIX_MINIMAL = 0.05;

Produit::Produit(unsigned no, const string& libelle, double prix) : no(no) {
   if (prix < PRIX_MINIMAL) {
      throw PrixNonValide("Erreur dans Produit::Produit :\n"
                           "le prix doit etre >= 5 cts !");
   }
   (unsigned&) this->no = no;
   this->libelle = libelle;
   this->prix = prix;
}

Produit&  Produit::operator=(const Produit& produit) {
   (unsigned&) this->no = produit.no;
   this->libelle = produit.libelle;
   this->prix = produit.prix;
   return *this;
}

void Produit::setPrix(double prix) {
   if (prix < PRIX_MINIMAL) {
      throw PrixNonValide("Erreur dans Produit::Produit :\n"
                           "le prix doit etre >= 5 cts !");
   }
   this->prix = prix;
}

double Produit::getPrix() const {
   return prix;
}

ostream& operator<<(ostream& os, const Produit& produit) {
   return os << '(' << produit.no << ", \"" << produit.libelle << "\", "
             << fixed << setprecision(2) << produit.prix << defaultfloat
             << setprecision(6) << ')';
}

bool operator==(const Produit& lhs, const Produit& rhs) {
   return lhs.no == rhs.no;
}
#include "produit.h"
#include <iomanip>

using namespace std;

Produit::Produit(unsigned no, const string& libelle, double prix)
   : no(no), libelle(libelle), prix(prix) {}

Produit&  Produit::operator=(const Produit& produit) {
   (unsigned&) this->no = produit.no;
   (string&) this->libelle = produit.libelle;
   this->prix = produit.prix;
   return *this;
}

void Produit::setPrix(double prix) {
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
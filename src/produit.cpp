#include "produit.h"

using namespace std;

Produit::Produit(unsigned no, const string& libelle, double prix)
   : no(no), libelle(libelle), prix(prix) {}

Produit::operator=(const Produit& produit) {
   (unsigned&) this->no = produit.no;
   (string&) this->libelle = produit.libelle;
}
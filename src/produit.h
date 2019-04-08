#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>
#include <iostream>

class Produit {
   friend std::ostream& operator<<(ostream& os, const Produit& produit);
   public:
      Produit(unsigned no, std::string libelle, double prix);
      void setPrix(double prix);
};

#endif
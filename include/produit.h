#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>
#include <iostream>

class Produit {
   friend std::ostream& operator<<(std::ostream& os, const Produit& produit);
   public:
      Produit(unsigned no, const std::string& libelle, double prix);
      Produit& operator=(const Produit& produit);
      void setPrix(double prix);
   private:
      const unsigned no;
      const std::string libelle;
      double prix;
};

#endif
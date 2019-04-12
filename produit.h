#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>
#include <iostream>

class Produit {
   friend std::ostream& operator<<(std::ostream& os, const Produit& produit);
   friend bool operator==(const Produit& lhs, const Produit& rhs);
   public:
      Produit(unsigned no, const std::string& libelle, double prix);
      Produit& operator=(const Produit& produit);
      void setPrix(double prix);
      double getPrix() const;
   private:
      const unsigned no;
      const std::string libelle;
      double prix;
      static const double PRIX_MINIMAL; 
};

#endif
/*
 -----------------------------------------------------------------------------------
 Laboratoire : 04
 Fichier     : produit.h
 Auteur(s)   : Thibaud Franchetti, Sacha Perdrizat
 Date        : 08.04.2019

 But         : Fournit une classe permettant de modéliser un produit (dans le sens
               d'article) basique.

 Remarque(s) : - Deux produits sont considérés égaux si leurs numéros sont égaux.
               - L'unicité des numéros de produit n'est en aucun cas garantie et
                 est à la charge de l'utilisateur.

 Compilateur : GCC-g++ 7.3.0
               GCC-g++ 8.2.0
 -----------------------------------------------------------------------------------
*/

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
      std::string libelle;
      double prix;
      static const double PRIX_MINIMAL; 
};

#endif
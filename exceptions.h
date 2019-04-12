/*
 -----------------------------------------------------------------------------------
 Laboratoire : 04
 Fichier     : exceptions.h
 Auteur(s)   : Thibaud Franchetti, Sacha Perdrizat
 Date        : 08.04.2019

 But         : Fournit un ensemble d'exceptions permettant de traiter certains
               cas particulier des classe Collection et Produit.

 Remarque(s) : 

 Compilateur : GCC-g++ 7.3.0
               GCC-g++ 8.2.0
 -----------------------------------------------------------------------------------
*/

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <stdexcept>

class IndiceNonValide : public std::logic_error {
   public:
      explicit IndiceNonValide(const std::string& what_arg) : std::logic_error(what_arg){}
      explicit IndiceNonValide(const char* what_arg) : std::logic_error(what_arg) {}
};

class PrixNonValide : public std::logic_error {
   public:
      explicit PrixNonValide(const std::string& what_arg) : std::logic_error(what_arg){}
      explicit PrixNonValide(const char* what_arg) : std::logic_error(what_arg) {}
};

#endif
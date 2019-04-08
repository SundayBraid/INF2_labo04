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
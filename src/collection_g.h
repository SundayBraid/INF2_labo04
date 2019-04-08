#ifndef COLLECTION_G_H
#define COLLECTION_G_H

#include <iostream>

template <typename T, template<typename, typename> class CONTENEUR>
class Collection;

template <typename T, template<typename, typename> class CONTENEUR>
std::ostream& operator<< (std::ostream& os, const Collection<T, CONTENEUR>& element);

template <typename T, template<typename, typename> class CONTENEUR>
class Collection {
   friend std::ostream& operator<< <>(std::ostream& os, const Collection& element);
   public:
      void ajouter(const T& element);
      size_t taille() const;
      T& get(size_t pos);
      bool contient(const T& element) const;
      void vider();
      template <typename UnaryOperator>
      void parcourir(UnaryOperator function);
   private:
};

#endif
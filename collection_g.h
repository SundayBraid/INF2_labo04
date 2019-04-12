#ifndef COLLECTION_G_H
#define COLLECTION_G_H

#include <iostream>
#include <memory>
#include <algorithm>
#include "exceptions.h"

template <typename T, template<typename, typename> class CONTENEUR>
class Collection;

template <typename T, template<typename, typename> class CONTENEUR>
std::ostream& operator<< (std::ostream& os, const Collection<T, CONTENEUR>& element);

template <typename T, template<typename, typename> class CONTENEUR>
class Collection {
   friend std::ostream& operator<< <>(std::ostream& os, const Collection& element);
   public:
      Collection() = default;
      void ajouter(const T& element);
      size_t taille() const;
      T& get(size_t pos);
      bool contient(const T& element) const;
      void vider();
      template <typename UnaryOperator>
      void parcourir(const UnaryOperator& fonction);
   private:
      CONTENEUR<T, std::allocator<T>> data;
};

template <typename T, template<typename, typename> class CONTENEUR>
void Collection<T, CONTENEUR>::ajouter(const T& element) {
   data.push_back(element);
}

template <typename T, template<typename, typename> class CONTENEUR>
size_t Collection<T, CONTENEUR>::taille() const {
   return data.size();
}

template <typename T, template<typename, typename> class CONTENEUR>
T& Collection<T, CONTENEUR>::get(size_t pos) {
   if (pos >= taille()) {
      throw IndiceNonValide("Erreur dans Collection::get :\n"
                        "n doit etre strictement plus petit que collection.size()");
   }
   auto i = data.begin();
   for(size_t c = 0; c < pos; ++c, ++i);
   return *i;
}

template <typename T, template<typename, typename> class CONTENEUR>
bool Collection<T, CONTENEUR>::contient(const T& element) const {
   return std::find(data.begin(), data.end(), element) != data.end();
}

template <typename T, template<typename, typename> class CONTENEUR>
void Collection<T, CONTENEUR>::vider() {
   data.clear();
}

template <typename T, template<typename, typename> class CONTENEUR>
template <typename UnaryOperator>
void Collection<T, CONTENEUR>::parcourir(const UnaryOperator& fonction) {
   std::transform(data.begin(), data.end(), data.begin(), fonction);
}

template <typename T, template<typename, typename> class CONTENEUR>
std::ostream& operator<< (std::ostream& os, const Collection<T, CONTENEUR>& c) {
   // os << '[';
   // for(auto i = c.data.begin(); i != c.data.end(); ++i) {
   //    os << *i;
   //    if (distance(i, c.data.end()) > 1) {
   //       os << ", ";
   //    }
   // }
   // return os << ']';

   const T* dernier = &c.data.back();

   os << '[';
   for (const T& i : c.data) {
      os << i;
      if (&i != dernier) {
         os << ", ";
      }
   }
   return os << ']';
}

#endif
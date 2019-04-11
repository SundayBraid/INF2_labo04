// #include "collection_g.h"
// #include <algorithm>

// using namespace std;

// template <typename T, template<typename, typename> class CONTENEUR>
// void Collection<T, CONTENEUR>::ajouter(const T& element) {
//    data.push_back(element);
// }

// template <typename T, template<typename, typename> class CONTENEUR>
// size_t Collection<T, CONTENEUR>::taille() const {
//    return data.size();
// }

// template <typename T, template<typename, typename> class CONTENEUR>
// T& Collection<T, CONTENEUR>::get(size_t pos) {
//    return data.at(pos);
// }

// template <typename T, template<typename, typename> class CONTENEUR>
// bool Collection<T, CONTENEUR>::contient(const T& element) const {
//    return find(data.begin(), data.end(), element) != data.end();
// }

// template <typename T, template<typename, typename> class CONTENEUR>
// void Collection<T, CONTENEUR>::vider() {
//    data.clear();
// }

// // template <typename T, template<typename, typename> class CONTENEUR>
// // template <typename UnaryOperator>
// // void Collection<T, CONTENEUR>::parcourir(UnaryOperator fonction) {
// //    transform(data.begin(), data.end(), data.begin(), fonction);
// // }

// template <typename T, template<typename, typename> class CONTENEUR>
// ostream& operator<< (ostream& os, const Collection<T, CONTENEUR>& c) {
//    os << '[';
//    for_each(c.data.begin(), c.data.end() - 1, [os](const T& i){os << i << ", ";});
//    return os << *c.data.end() << ']'; 
// }

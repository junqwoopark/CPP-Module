#include <algorithm>
#include <stdexcept>

template <typename T> typename T::iterator easyfind(T &container, int target) {
  typename T::iterator it = container.begin();
  typename T::iterator ite = container.end();

  while (it != ite) {
    if (*it == target)
      return (it);
    it++;
  }
  throw std::runtime_error("Not found!");
}

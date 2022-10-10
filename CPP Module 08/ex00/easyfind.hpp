#include <algorithm>

template <typename T> typename T::iterator easyfind(T &container, int target) {
  typename T::iterator iter;
  iter = std::find(container.begin(), container.end(), target);
  return (iter);
}

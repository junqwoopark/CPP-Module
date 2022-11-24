#include <algorithm>
#include <stdexcept>

template <typename T> typename T::iterator easyfind(T &container, int target) {
  typename T::iterator it;

  it = std::find(container.begin(), container.end(), target);

  if (it == container.end())
    throw std::runtime_error("Target not found");
  return (it);
}

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base *generate() {
  int type;
  Base *ret;

  std::srand(std::time(NULL));
  type = rand() % 3;
  if (type == 0) {
    ret = new A();
  } else if (type == 1) {
    ret = new B();
  } else {
    ret = new C();
  }
  return (ret);
}

void identify(Base *p) {
  if (dynamic_cast<A *>(p))
    std::cout << "Hi, I am A!!!" << std::endl;
  if (dynamic_cast<B *>(p))
    std::cout << "Hi, I am B!!!" << std::endl;
  if (dynamic_cast<C *>(p))
    std::cout << "Hi, I am C!!!" << std::endl;
}

int main() {
  Base *base = generate();
  identify(base);
  delete base;
}

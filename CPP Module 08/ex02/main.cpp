#include "MutantStack.hpp"

int main() {
  std::cout << "-----Test#0 : default-----" << std::endl;
  {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite) {
      std::cout << *it << std::endl;
      ++it;
    }
  }
  std::cout << std::endl;

  std::cout << "-----Test#1 : Copy constructor-----" << std::endl;
  {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    MutantStack<int> mstack2(mstack);

    mstack2.pop();

    std::cout << "mstack.top(): " << mstack.top() << std::endl;
    std::cout << "mstack2.top(): " << mstack2.top() << std::endl;
  }
  std::cout << std::endl;

  std::cout << "-----Test#2 : Assignment operator-----" << std::endl;
  {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    MutantStack<int> mstack2;

    mstack2 = mstack;

    mstack2.pop();

    std::cout << "mstack.top(): " << mstack.top() << std::endl;
    std::cout << "mstack2.top(): " << mstack2.top() << std::endl;
  }
  std::cout << std::endl;

  std::cout << "-----Test#3 : iterator-----" << std::endl;
  {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    std::cout << "default iterator: ";
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite) {
      std::cout << *it << ' ';
      ++it;
    }
    std::cout << std::endl;

    std::cout << "reverse iterator: ";
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite) {
      std::cout << *rit << ' ';
      ++rit;
    }
    std::cout << std::endl;

    std::cout << "const iterator: ";
    MutantStack<int>::const_iterator cit = mstack.cbegin();
    MutantStack<int>::const_iterator cite = mstack.cend();
    while (cit != cite) {
      std::cout << *cit << ' ';
      ++cit;
    }
    std::cout << std::endl;

    std::cout << "const reverse iterator: ";
    MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
    MutantStack<int>::const_reverse_iterator crite = mstack.crend();
    while (crit != crite) {
      std::cout << *crit << ' ';
      ++crit;
    }
    std::cout << std::endl;
  }
  return 0;
}

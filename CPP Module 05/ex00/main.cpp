#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b("Bureaucrat", 0);
        std::cout << b;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
   public:
    Harl();
    ~Harl();

    Harl& operator=(Harl const& rhs);

    void complain(std::string level);
    void filter(std::string level);

   private:
    std::string _level;

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif /* ************************************************************ HARL_H \
        */

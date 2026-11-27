#ifndef HARI_HPP
#define HARI_HPP

#include <iostream>
#include <string>

#define DEBUG "[DEBUG] : I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
#define INFO "[INFO] : I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"
#define WARNING "[WARNING] : I think I deserve to have some extra bacon for free. I’ve been coming foryears, whereas you started working here just last month."
#define ERROR "[ERROR] : This is unacceptable! I want to speak to the manager now."

class Harl {
    private:
        void debug(void) const;
        void info(void) const;
        void warning(void) const;
        void error(void) const;
    public:
        Harl();
        ~Harl();
        void complain(std::string level) const;
};

#endif
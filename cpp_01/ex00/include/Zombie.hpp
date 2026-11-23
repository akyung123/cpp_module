#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

// 왤케 바보같이 생각햇지?
// 당연히 클래스는 헤더에 정의하고 함수를 파일로 만들어야지!

// 헤더에 만들어두는 생성자와 소멸자는 선언입니다
// 선언이 존재해야 cpp에서 본체를 정의 가능
// & <- 이거는 참조를 의미함

class Zombie {
    private:
        std::string name;
    public:
        void announce(void);
        
        Zombie(const std::string &inputname);

        ~Zombie();
};

void randomChump(std::string name);

Zombie *newZombie(std::string name);

#endif
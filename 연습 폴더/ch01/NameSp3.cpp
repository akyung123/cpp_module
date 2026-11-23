#include <iostream>

namespace BestComImp1 {
    void SimpleFunc(void);
}

namespace BestComImp1 {
    void Prettyfunc(void);
}

namespace ProgComInp1 {
    void SimpleFunc(void);
}

int main(void) {
    BestComImp1::SimpleFunc();
    return 0;
}

void BestComImp1::SimpleFunc(void) {
    std::cout << "BestCom이 정의한 함수" << std::endl;
    Prettyfunc(); // 동일이름 공간의 함수
    ProgComInp1::SimpleFunc(); // 다른 이름공간의 함수
}

void BestComImp1::Prettyfunc(void) {
    std::cout << "So Pretty!" << std::endl;
}

void ProgComInp1::SimpleFunc(void) {
    std::cout << "Progcom이 정의한 함수" << std::endl;
}
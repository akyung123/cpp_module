#include <iostream>

namespace BestComImp1 {
    void SimpleFunc(void);
}

namespace ProgComInp1 {
    void SimpleFunc(void);
}

int main(void) {
    BestComImp1::SimpleFunc();
    ProgComInp1::SimpleFunc();
    return 0;
}

void BestComImp1::SimpleFunc(void) {
    std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComInp1::SimpleFunc(void) {
    std::cout << "Progcom이 정의한 함수" << std::endl;
}
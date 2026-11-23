#include <iostream>

namespace BestComImp1 {
    void SimpleFunc(void) {
        std::cout << "BestCom이 정의한 함수" << std::endl;
    }
}

namespace ProgComInp1 {
    void SimpleFunc(void) {
        std::cout << "ProgComInp1이 정의한 함수" << std::endl;
    }
}

int main(void) {
    BestComImp1::SimpleFunc();
    ProgComInp1::SimpleFunc();
    return 0;
}
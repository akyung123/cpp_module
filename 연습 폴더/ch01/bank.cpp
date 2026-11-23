#include <iostream>
#include <cstring>
const int NAME_LEN=20;

void ShowMenu(void);
void Manu_handler(int input); // 핸들러
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllaccInfo(void);

typedef struct {
    int AccountId;
    int balance; (잔액)
    char CusName[NAME_LEN];
} Account;

int main(void)
{
    int input = 0;

    while (input != 5)
    {
        // 출력하기
        ShowMenu();
        // 입력받기
        std::cin >> input;
        // 핸들러ㄴ
    }

    return (0);
}

void MakeAccount(void)
{
    int id;
    char  name[NAME_LEN];
    int balance;

    std::cout << "[계좌개설]" << endl;
    std::cout << "계좌ID: "; std::cin >> id;
    std::cout << "이 름: "; std::cin >> name;
    std::cout << "입금액: "; std::balance;
    std::cout << endl;

    Account
}

void Manu_handler(int input)
{
    if (input == 1)
        MakeAccount();
    else if (input == 2)
        DepositMoney();
    else if (input == 3)
        WithdrawMoney();
    else if (input == 5)
        return ;
}

void ShowMenu(void)
{
    std::cout << "1. 계좌개설\n2. 입 금\n3. 출 금\n4. 계좌정보 전체 출력\n5. 프로그램 종료\n";
    std::cout << "선택: ";
}
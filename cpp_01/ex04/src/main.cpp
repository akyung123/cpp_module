#include <iostream>
#include <fstream>
#include <string>

// 파일 입출력에 관한 과제
/*
    <filename> 파일을 열고 내용을 복사한다.
    모든 s1 문자열을 s2 문자열로 변경해서 <filename>.replace 파일에 붙여넣는다.
    // 프로그램이 예상대로 작동하는지 확인하기 위해 직접 테스트 코드를 작성하여 제출해야 합니다.
*/

// 한줄씩 바꾸는 함수
std::string replaceLines(const std::string &str, const std::string &from, const std::string &to)
{
    std::string result;
    size_t start = 0;
    size_t found;
    size_t from_len = from.length();
    // std.fine(찾을 문자열, 시작위치)
    // std::string::npos = 위치가 없다. fine반환값
    while((found = str.find(from, start)) != std::string::npos) {
        result.append(str, start, found - start);
        result.append(to);
        start = found + from_len;
    }
    result.append(str, start);
    return (result);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (std::cout << "인수가 충분하지 않습니다. " << std::endl, 1);
    // 파일 입출력을 지원하기 위한 ifstream, ofstream 클래스
    // ofstream은 파일을 기록할 때, 사용
    // ifstream은 파일에 저장된 데이터를 읽어올 때, 사용
    // fstream은 입출력 모두 가능
    std::fstream file;
    // open(파일경로, 입출력 모드 설정)
    // ios(Input/Output Stream의 약자)
    file.open(argv[1], std::ios::in);
    // 파일 열기 실패 시, 출력
    if (file.fail())
        return (std::cout << "파일 열기 실패" << std::endl, 1);
    // 성공 시
    else {
        // 새로운 파일을 열어서 바뀐 내용을 담아야함
        std::fstream re_file;
        std::string re_file_name = argv[1];
        re_file_name += ".replace";
        // c_str() : 객체에 저장되어있는 문자열(std::string)를 C 스타일로 반환해주는 멤버함수
        re_file.open(re_file_name.c_str(), std::ios::out);
        std::string line;
        // 열려있는지 확인하고 반복하기
        if (file.is_open()) {
            while (getline(file, line))
                re_file << replaceLines(line, argv[2], argv[3]) << std::endl;
        }
        re_file.close();
        file.close();
    }
    return (0);
}
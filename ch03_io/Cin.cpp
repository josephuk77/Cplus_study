#include <iostream>
#include <limits>

int main()
{
    int a;
    std::cin >> a; // &가 없는 이유는 cin이 주소를 자동으로 처리해주기 때문에 필요 없음
    std::cout << a << std::endl;

    char ch;
    std::cin >> ch;
    std::cout << ch << std::endl;

    std::cin.ignore(); // 버퍼에 남아있는 개행문자 1개 제거
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');// 버퍼에 남아있는 모든 문자 제거 (개행문자까지)

    std::cin >> ch;
    std::cout << ch << std::endl;

    //cin에서 입력의 문제가 생긴 경우에 다음 값 입력받기
    int num;
    std::cin >> num;
    std::cout << num << std::endl;

    if (std::cin.fail())
        std::cin.clear();// 오류 상태 플래그 초기화
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');// 버퍼에 남아있는 모든 문자 제거 (개행문자까지)

    std::cin >> num;
    std::cout << num << std::endl;

    return 0;
}
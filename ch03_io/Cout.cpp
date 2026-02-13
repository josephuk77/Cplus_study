#include <iomanip>
#include <iostream>

int main()
{
    std::cout << 1 << std::endl; // 정수 1 출력
    std::cout << '1' << std::endl; // 문자 '1' 출력

    std::cout.put('a');
    std::cout.put('\n');
    std::cout.write("Hello, World!", 5); // Hello 출력
    std::cout.put('\n');

    std::cout.width(10);
    std::cout << 1 << std::endl; // 너비 10, 오른쪽 정렬로 1 출력
    std::cout.width(10);
    std::cout.fill('#');
    std::cout << 2 << std::endl; // 너비 10, 오른쪽 정렬로 #으로 채워진 2 출력

    float num = 0.1234567f;
    std::cout << num << std::endl; // 소수점 6자리까지만 출력

    std::cout.precision(10);
    std::cout << num << std::endl; // 소수점 10자리까지 출력

    std::cout.setf(std::ios_base::showpos); // showpos 플래그 설정
    std::cout << 1 << std::endl; // +1 출력
    std::cout.unsetf(std::ios_base::showpos); // showpos 플래그 해제
    std::cout << 2 << std::endl;

    std::cout << true << std::endl;
    std::cout << false << std::endl;
    std::cout.setf(std::ios_base::boolalpha); // boolalpha 플래그 설정
    std::cout << true << std::endl;
    std::cout << false << std::endl;

    std::cout.setf(std::ios_base::right, std::ios_base::adjustfield);
    std::cout.width(10);
    std::cout <<  "Right" << std::endl; // 오른쪽 정렬로 "Right" 출력
    std::cout.setf(std::ios_base::left, std::ios_base::adjustfield);
    std::cout.width(10);
    std::cout <<  "Left" << std::endl; // 왼쪽 정렬로 "Left" 출력

    std::cout.setf(std::ios_base::hex, std::ios_base::basefield);
    std::cout << 255 << std::endl; // 16진수로 ff 출력
    std::cout.setf(std::ios_base::dec, std::ios_base::basefield);
    std::cout << 255 << std::endl; // 10진수로 255 출력
    std::cout.setf(std::ios_base::oct, std::ios_base::basefield);
    std::cout << 255 << std::endl; // 8진수로 377 출력

    std::cout << std::hex << 255 << std::endl; // 16진수로 ff 출력
    std::hex(std::cout);
    std::cout << 255 << std::endl; // 16진수로 ff 출력

    std::dec(std::cout);
    std::cout << std::setw(10) << std::setfill('*') << std::left << 123 << std::endl; // 너비 10, 왼쪽 정렬, *으로 채워진 123 출력


    return 0;
}
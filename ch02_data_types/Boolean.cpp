#include <iostream>

int main()
{
    bool b0 = 0 == 0;
    bool b1 = 0 < 1;
    bool b2 = 0 > 1;

    std::cout.setf(std::ios_base::boolalpha); // boolalpha 설정
    std::cout << "b0: " << b0 << std::endl; // b0 출력 true
    std::cout << "b1: " << b1 << std::endl; // b1 출력 true
    std::cout << "b2: " << b2 << std::endl; // b2 출력 false

    if (b0)
        std::cout << "b0 is true" << std::endl;
    if (b1)
        std::cout << "b1 is true" << std::endl;
    if (b2)
        std::cout << "b2 is true" << std::endl;

    int itrue = true;
    int ifalse = false;

    std::cout << "itrue: " << itrue << std::endl;   // itrue 출력 1
    std::cout << "ifalse: " << ifalse << std::endl; // ifalse 출력 0

    bool btrue = 100;
    bool bfalse = 0;

    std::cout << "btrue: " << btrue << std::endl;   // btrue 출력 true
    std::cout << "bfalse: " << bfalse << std::endl; // bfalse 출력 false
}
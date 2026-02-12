#import <iostream>

int main()
{
    int num0 = 1;
    int num1 = num0 * 1.5;
    int num2 = num0 / 2;
    int num3 = num0 * 2.5;

    std::cout << "num0: " << num0 << std::endl; // num0 출력 1
    std::cout << "num1: " << num1 << std::endl; // num1 출력 1
    std::cout << "num2: " << num2 << std::endl; // num2 출력 0
    std::cout << "num3: " << num3 << std::endl; // num3 출력 2

    int a = 11; // decimal
    int b = 011; // octal
    int c = 0b11; // binary
    int d = 0x11; // hexadecimal

    std::cout << "a (decimal): " << a << std::endl; // 11
    std::cout << "b (octal): " << b << std::endl;   // 9
    std::cout << "c (binary): " << c << std::endl;  // 3
    std::cout << "d (hexadecimal): " << d << std::endl; // 17

    int intNum = 0;
    long longNum = 0;
    int* intPtr = &intNum;

    std::cout << "Size of int: " << sizeof(intNum) << " bytes" << std::endl;
    std::cout << "Size of long: " << sizeof(longNum) << " bytes" << std::endl;
    std::cout << "Size of int pointer: " << sizeof(intPtr) << " bytes" << std::endl;
    // 운영체제 별로 크기가 다름 따라서 fixed int를 사용
    int8_t fixedInt8 = 0;
    int16_t fixedInt16 = 0;
    int32_t fixedInt32 = 0;
    int64_t fixedInt64 = 0;

    std::cout << "Size of int8_t: " << sizeof(fixedInt8) << " bytes" << std::endl;
    std::cout << "Size of int16_t: " << sizeof(fixedInt16) << " bytes" << std::endl;
    std::cout << "Size of int32_t: " << sizeof(fixedInt32) << " bytes" << std::endl;
    std::cout << "Size of int64_t: " << sizeof(fixedInt64) << " bytes" << std::endl;

    unsigned int uInt = 0u; // unsigned int
    long int lInt = 0L; // long int
    unsigned long int uLInt = 0UL; // unsigned long int
    unsigned long long int uLLInt = 0ULL; // unsigned long long int
    // 접미사 u, l, ul, ull 등을 사용하여 리터럴의 타입을 지정할 수 있음

    //overflow 예제
    unsigned char uChar = 255; // 최대값 255
    std::cout << "uChar before overflow: " << static_cast<int>(uChar) << std::endl;
    uChar += 1; // overflow 발생
    std::cout << "uChar after overflow: " << static_cast<int>(uChar) << std::endl; // 0으로 돌아감

    //underflow 예제
    unsigned char uChar2 = 0; // 최소값 0
    std::cout << "uChar2 before underflow: " << static_cast<int>(uChar2) << std::endl;
    uChar2 -= 1; // underflow 발생
    std::cout << "uChar2 after underflow: " << static_cast<int>(uChar2) << std::endl; // 255로 돌아감

    return 0;
}
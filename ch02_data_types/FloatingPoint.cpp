#include <iostream>
#include <cfloat>

int main()
{
    float num0 = 1.5;
    float num1 = num0 * 1.5;
    float num2 = num0 / 2;
    float num3 = num0 - 3;

    std::cout << "num0: " << num0 << std::endl; // num0 출력 1.5
    std::cout << "num1: " << num1 << std::endl; // num1 출력 2.25
    std::cout << "num2: " << num2 << std::endl; // num2 출력 0.75
    std::cout << "num3: " << num3 << std::endl; // num3 출력 -1.5
    //부동소수점 float은 실수형 표현

    float floatNum = 1.0;
    double doubleNum = 1.0;
    long double longDoubleNum = 1.0;

    std::cout << "Size of float: " << sizeof(floatNum) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(doubleNum) << " bytes" << std::endl;
    std::cout << "Size of long double: " << sizeof(longDoubleNum) << " bytes" << std::endl;
    // float는 4바이트, double은 8바이트, long double은 8바이트(플랫폼에 따라 다를 수 있음)

    // -118.625
    //= -1110110.101 in binary
    //= -1.11010111 x 2^6
    // 부호|  가수부   | 지수부 |
    //  1 |11010111| 1000010|
    // float형은 1비트 부호, 8비트 지수부, 23비트 가수부로 구성
    // float형으로 표현 시 약간의 오차 발생
    float precisionTest = -118.625f;
    std::cout << "Precision Test: " << precisionTest << std::endl; // -118.625 출력

    float a =0.1f;
    float b = 0.02f * 5.f;

    std::cout.precision(64);
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    if (a == b)
        std::cout << "a and b are equal. 1" << std::endl;
    if (a == 0.1f)
        std::cout << "a and 0.1f are equal. 2" << std::endl;
    if (a == 0.1)
        std::cout << "a and 0.1 are equal. 3" << std::endl;
    if (a == 0.1L)
        std::cout << "a and 0.1L are equal. 4" << std::endl;
    // float형은 0.1을 정확히 표현할 수 없기 때문에 and b are equal. 1 출력 안됨
    if (fabs(a -b) <= FLT_EPSILON)
        std::cout << "a and b are approximately equal. 5" << std::endl;
    // FLT_EPSILON은 float형이 표현할 수 있는 가장 작은 양의 값과 1.0의 차이



    return 0;
}
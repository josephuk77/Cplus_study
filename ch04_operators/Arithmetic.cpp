#include <iostream>

int main()
{
    // 산술 연산자 예제
    int a = 10;
    int b = 3;

    std::cout << "a + b = " << a + b << std::endl; // 덧셈
    std::cout << "a - b = " << a - b << std::endl; // 뺄셈
    std::cout << "a * b = " << a * b << std::endl; // 곱셈
    std::cout << "a / b = " << a / b << std::endl; // 나눗셈
    std::cout << "a % b = " << a % b << std::endl; // 나머지 연산

    // 부동소수점 산술 연산 예제
    float x = 1.5f;
    float y = 2.5f;

    std::cout << "x + y = " << x + y << std::endl; // 덧셈
    std::cout << "x - y = " << x - y << std::endl; // 뺄셈
    std::cout << "x * y = " << x * y << std::endl; // 곱셈
    std::cout << "x / y = " << x / y << std::endl; // 나눗셈

    // 연산자 우선순위 예제
    int result = a + b * 2; // 곱셈이 덧셈보다 우선순위가 높음
    std::cout << "a + b * 2 = " << result << std::endl; // 10 + (3 * 2) = 16

    result = (a + b) * 2; // 괄호로 우선순위 변경
    std::cout << "(a + b) * 2 = " << result << std::endl; // (10 + 3) * 2 = 26

    int i, j, k;
    i = j = k = 10; // 연쇄 할당 예제
    std::cout << "i: " << i << ", j: " << j << ", k: " << k << std::endl; // i, j, k 모두 10 출력

    int f = 1; // 할당이 아니라 함수가 호출되어 생성되는 생성자이다 int f(1);과 동일

    // 단항 연산자 예제
    int c = 5;
    std::cout << "c: " << c << std::endl; // c 출력
    std::cout << "-c: " << -c << std::endl; // 단항 음수 연산자
    std::cout << "++c: " << ++c << std::endl; // 전위 증가 연산자
    std::cout << "c++: " << c++ << std::endl; // 후위 증가 연산자
    std::cout << "c: " << c << std::endl; // c 출력

    // 증감 연산자 예제
    int d = 5;
    std::cout << "d: " << d << std::endl; // d 출력
    std::cout << "d++: " << d++ << std::endl; // 후위 증가 연산자
    std::cout << "d: " << d << std::endl; // d 출력
    std::cout << "++d: " << ++d << std::endl; // 전위 증가 연산자
    std::cout << "d: " << d << std::endl; // d 출력
    std::cout << "d--: " << d++ << std::endl; // 후위 감소 연산자
    std::cout << "d: " << d << std::endl; // d 출력
    std::cout << "--d: " << ++d << std::endl; // 전위 감소 연산자
    std::cout << "d: " << d << std::endl; // d 출력

    // 복합 대입 연산자 예제
    int e = 10;
    std::cout << "e: " << e << std::endl; // e 출력
    e += 5; // e = e + 5
    std::cout << "e += 5: " << e << std::endl; // e 출력
    e -= 3; // e = e - 3
    std::cout << "e -= 3: " << e << std::endl; // e 출력
    e *= 2; // e = e * 2
    std::cout << "e *= 2: " << e << std::endl; // e 출력
    e /= 4; // e = e / 4
    std::cout << "e /= 4: " << e << std::endl; // e 출력
    e %= 3; // e = e % 3
    std::cout << "e %= 3: " << e << std::endl; // e 출력



    return 0;
}
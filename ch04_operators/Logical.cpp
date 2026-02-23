#include <iostream>

int main()
{
    // 논리 연산자 예제
    bool a = true;
    bool b = false;

    std::cout << "a && b: " << (a && b) << std::endl; // a와 b가 모두 true일 때 true
    std::cout << "a || b: " << (a || b) << std::endl; // a 또는 b가 true일 때 true
    std::cout << "!a: " << (!a) << std::endl; // a가 false일 때 true
    std::cout << "!b: " << (!b) << std::endl; // b가 false일 때 true

    // 논리 연산자 우선순위 예제
    bool result = a || b && !a; // &&가 ||보다 우선순위가 높음
    std::cout << "a || b && !a: " << result << std::endl; // a || (b && !a) = true || (false && false) = true || false = true

    // 논리 연산자 우선순위
    // ! > && > || > = > ? : > , > += -= *= /= %= > , > & ^= |= > , > , ( ) > = > throw > new > typeid > sizeof > alignof >
    // decltype > noexcept > static_cast > dynamic_cast > const_cast > reinterpret_cast > < > . > -> > ++ > -- > sizeof...

    
    return 0;
}

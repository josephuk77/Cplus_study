#include <iostream>

int main()
{
     // 비교 연산자 예제
    int a = 10;
    int b = 20;

    std::cout << "a == b: " << (a == b) << std::endl; // a와 b가 같은지 비교
    std::cout << "a != b: " << (a != b) << std::endl; // a와 b가 다른지 비교
    std::cout << "a < b: " << (a < b) << std::endl;   // a가 b보다 작은지 비교
    std::cout << "a > b: " << (a > b) << std::endl;   // a가 b보다 큰지 비교
    std::cout << "a <= b: " << (a <= b) << std::endl; // a가 b보다 작거나 같은지 비교
    std::cout << "a >= b: " << (a >= b) << std::endl; // a가 b보다 크거나 같은지 비교

    // <=> 연산자 예제 (C++20부터 지원)
    // int c = 10;
    // std::cout << "a <=> c: " << (a <=> c) << std::endl; // a와 c를 세 방향으로 비교 (a < c, a == c, a > c)
    
}
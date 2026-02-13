#include <iostream>
#include <cstdio>

int main()
{
    printf("hello %d\n", 10);
    printf("%d + %d = %i\n", 2, 3, 2 + 3);
    printf("%u + %u = %u\n", 2u, 3u, 2u + 3u);
    printf("%u\n", -1); // unsigned 형식으로 -1 출력 시 매우 큰 값으로 출력됨
    printf("%c\n", 'A'); // 문자 A 출력
    printf("%s\n", "Hello, World!"); // 문자열 출력
    printf("%f - %f = %lf\n", 2.0, 3.0f, -1.0f); // float와 double 형식 출력
    printf("%o, %x, %X\n", 255, 255, 255); // 8진수, 소문자 16진수, 대문자 16진수 출력
    printf("%010d\n", 123); // 최소 너비 10, 빈칸은 0으로 채움
    printf("%.5f\n", 3.1415926535); // 소수점 이하 5자리까지 출력
    printf("%-10sEND\n", "Left"); // 최소 너비 10, 왼쪽 정렬, 나머지는 공백으로 채움
    printf("%+d\n", 42); // 양수 앞에 + 기호 출력
    printf("% d\n", 42); // 양수 앞에 공백 출력
    printf("%#x\n", 255); // 16진수 앞에 0x 접두사 출력
    printf("%e\n", 12345.6789); // 지수 표기법으로 출력
    printf("%g\n", 12345.6789); // 자동으로 %f 또는 %e 형식 선택하여 출력
    //std::cout와 printf의 차이점
    int num = 42;
    std::cout << "Using std::cout: " << num << std::endl;
    printf("Using printf: %d\n", num);
    // std::cout는 타입에 따라 자동으로 형식을 처리하지만, printf는 명시적으로 형식을 지정해야 함
    // std::cout는 C++ 스타일의 입출력이며, printf는 C 스타일의 입출력임
    // std::cout는 타입 안전성을 제공하지만, printf는 그렇지 않음
    // std::cout는 버퍼링이 자동으로 처리되지만, printf는 버퍼링이 수동으로 처리됨
    // std::cout는 확장성이 뛰어나고 사용자 정의 타입에 대한 입출력도 지원하지만, printf는 기본 타입에 대해서만 지원함

    freopen("output.txt", "w", stdout);
    printf("Hello World\n");
    // 이 코드는 "output.txt" 파일을 열고, 표준 출력(stdout)을 이 파일로 리다이렉트함
    // 이후의 모든 printf 출력은 콘솔이 아닌 "output.txt" 파일에 기록됨


    return 0;
}

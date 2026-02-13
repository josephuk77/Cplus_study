#pragma warning(disable:4996)

#include <cstdio>

int main()
{
    int num = 0;
    scanf("%d", &num); // 사용자로부터 정수 입력 받기
    printf("You entered: %d\n", num); // 입력 받은 정수 출력

    float f0;
    double d0, d1;
    scanf("%f %lf %lf", &f0, &d0, &d1); // float와 double 형식으로 입력 받기
    printf("You entered: %f, %lf, %lf\n", f0, d0, d1); // 입력 받은 값 출력


    // scanf로 문자 입력 받을 때 버퍼에 남아있는 개행문자 때문에 문제가 발생할 수 있음
    char ch;
    scanf("%c", &ch);
    printf("1, %c\n", ch); // 문자 출력

    scanf("%c", &ch);
    printf("2, %d\n", ch); // 버퍼에 남아있는 개행문자 출력

    // 버퍼에 남아있는 개행문자 제거
    char ch2;
    scanf("%c", &ch2);
    printf("1, %c\n", ch2); // 문자 출력

    while (getchar() != '\n'); // 개행문자 제거

    scanf("%c", &ch2);
    printf("2, %d\n", ch2);

    return 0;
}
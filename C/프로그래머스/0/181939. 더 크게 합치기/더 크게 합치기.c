#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    // 1. b의 자릿수를 구해 multiplier_b 계산 (a를 밀어줄 크기)
    int temp_b = b;
    int multiplier_b = 1;
    while (temp_b > 0) {
        multiplier_b *= 10;
        temp_b /= 10;
    }
    if (b == 0) multiplier_b = 10;

    // 2. a의 자릿수를 구해 multiplier_a 계산 (b를 밀어줄 크기)
    int temp_a = a;
    int multiplier_a = 1;
    while (temp_a > 0) {
        multiplier_a *= 10;
        temp_a /= 10;
    }
    if (a == 0) multiplier_a = 10;

    // 3. 두 가지 방법으로 붙인 값을 각각 구합니다.
    int a_before_b = (a * multiplier_b) + b; // 예: 12345
    int b_before_a = (b * multiplier_a) + a; // 예: 34512

    // 4. 둘 중 더 큰 값을 비교하여 리턴합니다.
    if (a_before_b >= b_before_a) {
        return a_before_b;
    } else {
        return b_before_a;
    }
}
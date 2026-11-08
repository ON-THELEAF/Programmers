#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    
    int len = strlen(str1) + strlen(str2);
    char* answer = (char*)malloc(sizeof(char) * (len * 2 + 1));
    
    int i =0;
    for (int j=0; j< len; j++){
        answer[i] = str1[j];
        i++;
        answer[i] = str2[j];
        i++;
    }
    
    return answer;
}
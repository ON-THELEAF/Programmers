#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    int size = end_num - start_num + 1;
    
    int* answer = (int*)malloc(sizeof(int) * size);
    
    for (int i = 0; i < size; i++) {
        answer[i] = start_num + i;
    }
    return answer;
}
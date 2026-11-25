#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    for (int i = 0; i < n; i++){
        answer += 12000;
    }
    for (int j = 0; j<k; j++){
        answer += 2000;
    }
    if( n >=10 ){
        if( n/10 == k ){
            answer -= k * 2000;
        }
        else{
            answer -= n/10 * 2000;
        }
    }
    return answer;
}
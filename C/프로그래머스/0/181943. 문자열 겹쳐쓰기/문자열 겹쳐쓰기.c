#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* overwrite_string, int s) {
    int my_string_len = strlen(my_string);
    int overwrite_string_len = strlen(overwrite_string);
    int new_string_len = my_string_len - overwrite_string_len + strlen(overwrite_string);
    char* new_string = (char*)malloc((new_string_len + 1) * sizeof(char));
    int i, j;


    for (i = 0; i < s; i++) {
        new_string[i] = my_string[i];
    }
    for (j = 0; j < strlen(overwrite_string); j++) {
        new_string[i++] = overwrite_string[j];
    }
    for (j = s + strlen(overwrite_string); j < my_string_len; j++) {
        new_string[i++] = my_string[j];
    }
    new_string[new_string_len] = '\0';

    return new_string;
}

int main() {
    const char* my_string;
    const char* overwrite_string;
    int s;
    char* result = solution(my_string, overwrite_string, s);
    printf("%s\n", result);
    free(result);
    return 0;
}
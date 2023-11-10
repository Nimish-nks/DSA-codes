//our valid string contains onlly letter or numerals
#include <stdio.h>

int isValid(char* str) {
    while (*str) {
        if (!((*str >= '0' && *str <= '9') || (*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))) {
            return 0;
        }
        str++;
    }
    return 1;
}

int main() {
    char test[] = "Anil123";
    if (isValid(test)) {
        printf("The string is valid.\n");
    } else {
        printf("The string is not valid.\n");
    }
    return 0;
}

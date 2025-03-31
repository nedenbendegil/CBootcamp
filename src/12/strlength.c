#include <stdio.h>

size_t StringLength(const char* input) {
    size_t length = 0;
    while(input[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char xx[10] = {'h','e','l','l','o','h','h','h','h','\0'};
    printf("%d  ",StringLength(xx));
    return 0;
}
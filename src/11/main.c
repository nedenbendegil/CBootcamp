#include <stdio.h>

int strfLen(char* ptr) {
    int st = 0;
    while(*ptr != '\0') {
        st++;
        ptr++;
    }
    return st;
}

int main() {

    char xx[10] = {'h','e','l','l','o','h','h','h','h','\0'};
    printf("%d  ",strfLen(xx));

    return 0;
}

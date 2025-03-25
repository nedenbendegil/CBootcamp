#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char* c = "selam";
    char* d;
    printf("%p\n", c);
    printf("%c\n", *c);
    printf("%c\n",*(c+1));
    d = malloc(sizeof(char)*52);
    d[0] = 'a';
    d[1] = 'b';
    d[2] = 'c';
    d[3] = '\0';
    printf("addres of d is: %p\n", d);
    printf("size of d is: %ld\n", strlen(d));
    printf("sizeof(d) == %lu\n", sizeof(d));
    free(d);
    d = "selafffffffffffm";
    printf("the new address of d is: %p\n", d);
    printf("the new size of d is; %ld\n", strlen(d));
    printf("new sizeof(d) == %lu\n", sizeof(d));
    printf("%c\n", *d); 
    return 0;
}

#include <stdio.h>
#include <assert.h>

void printStuff(int a) {
    assert(a < 0 && "a is NOT smaller than 0");
    puts("blahhhhh");
}

int main() {
   printStuff(4);
   return 0;
}

#include <stdio.h>
#include "vektor.h"

int main() {
    vector_h first;
    first.x = 2.0f;
    first.y = 4.0f;

    vector_h second;
    second.x = 2.0f;
    second.y = 4.0f;
    
    printf("%f,   %f\n", first.x, first.y);
    Add(&first, &second);
    printf("%f,   %f", first.x, first.y);
    return 0;
}

#ifndef VEKTOR_H
#define VEKTOR_H

typedef struct vector {
    float x;
    float y;
}vector_h;

void Add(vector_h* out, const vector_h* in);

#endif

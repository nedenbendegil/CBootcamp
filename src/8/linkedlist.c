#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* nextNode;
} node_t;

int main() {

    node_t one;
    node_t two;
    node_t three;
    one.data = 44;
    two.data = 22;
    three.data = 55;

    one.nextNode = &two;
    two.nextNode = &three;
    three.nextNode = NULL;

    node_t* ccc = &one;
    while (ccc != NULL) {
	printf("%d \n", ccc->data);
	ccc = (ccc->nextNode);
    }
    return 0;
}


#include <stdio.h>
#include "linkedlist.h"

int main() {
    linkedlist_t* x = createLinkedlist();
    appendLinkedlist(x, 10);
    appendLinkedlist(x, 30);
    appendLinkedlist(x, 9999);
    printLinkedlist(x);
    return 0;
}

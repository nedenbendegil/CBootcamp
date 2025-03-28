#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node {
    int value;
    struct node* next;
}node_t;

// will hold the head always so that we can traverse
typedef struct linkedlist{
    node_t* head;

}linkedlist_t;

// malloc linkedlist and return a pointer
linkedlist_t* createLinkedlist();
void printLinkedlist(linkedlist_t* list);
void freeLinkedlist(linkedlist_t* list);
void appendLinkedlist(linkedlist_t* list, int data);
#endif

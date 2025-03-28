#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

linkedlist_t* createLinkedlist() {
    linkedlist_t* newList = (linkedlist_t*)malloc(sizeof(linkedlist_t));
    newList->head = NULL;

    return newList;
}

void appendLinkedlist(linkedlist_t* list, int data) {
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->value = data;
    newNode->next = NULL;

    if(list->head == NULL){
        list->head = newNode;
    } else {
        // Linkedlist (head)=(node1) -> (node2)
        node_t* temp = list->head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printLinkedlist(linkedlist_t* list) {
    node_t* temp = list->head;
    while(temp != NULL) {
        printf("data %d\n", temp->value);
        temp = temp->next;
    }
}

void freeLinkedlist(linkedlist_t* list) {
    if(list == NULL){
        return;
    }
    node_t curr = list->head;
    if(curr == NULL) {
        free(list);
        return;
    }
    node_t nextNode = NULL;
    while(curr != NULL) {
        nextNode = curr->next
        free(curr);
        curr = nextNode;
    }

    free(list);
}

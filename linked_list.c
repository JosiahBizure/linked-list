#include <stdlib.h> // malloc/free, NULL
#include <stdio.h> // puts, printf

#include "linked_list.h"

List_t* construct_list() {
    List_t* new_list = (List_t*)malloc(sizeof(List_t));
    new_list->head = NULL;
    return new_list;
}

void append_node(List_t* list, int num) {
    // Prepare new node to insert
    Node_t* new_node = (Node_t*)malloc(sizeof(Node_t));
    new_node->data = num;
    new_node->next = NULL;

    if (list->head == NULL) { // Empty list 
        list->head = new_node;
        return;
    }

    // If head->next != null, traverse the list until the last node
    Node_t* curr = list->head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    // We're at the end of the list, insert the new node
    curr->next = new_node;
}

void print_list(List_t* list) {
    // If list is empty return
    if (list->head == NULL) {
        puts("The list is empty");
        return;
    }

    Node_t* curr = list->head;

    // do-while to skip the dummy head node
    while (curr != NULL) {
        printf("%d\n", curr->data);
        curr = curr->next;
    }
}
 
void delete_list(List_t* list) {
    if (list == NULL) return;
    
    // If list is empty, free the list struct
    if (list->head == NULL) {
        free(list);
        return;
    }

    // Otherwise, free all of the nodes
    Node_t* iter = list->head;
    Node_t* destroyer = list->head;

    while (destroyer != NULL) {
        iter = iter->next;
        free(destroyer);
        destroyer = iter;
    }

    // Now that nodes are free, free the list struct
    free(list);
}
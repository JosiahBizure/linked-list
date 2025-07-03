#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node Node_t;
typedef struct List List_t;

// Individual node in the chain
typedef struct Node {
    int data;
    Node_t* next;
} Node_t;

// Linked list data structure, which always
// holds the first node in the chain
typedef struct List {
    Node_t* head;
} List_t;

// Create a new linked list on the heap and
// then return a pointer to that linked list
// Takes an optional head value
List_t* construct_list();

// Create a new Node_t and add to end of the list
void append_node(List_t* list, int num);

// Walk through the list and print all values
void print_list(List_t* list);

// Free all of the memory
void delete_list(List_t* list);

#endif
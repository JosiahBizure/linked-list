#include "linked_list.h"

int main() {
    List_t* list = construct_list();
    // append_node(list, 1);
    // append_node(list, 3);
    // append_node(list, 5);

    print_list(list);

    delete_list(list);

    return 0;
}
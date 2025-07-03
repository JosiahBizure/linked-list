# linked-list
Simple singly linked list implementation in C.

## Goals

- Practice dynamic memory allocation with `malloc` and `free`
- Increase confidence when manipulating pointers and linked structures
- Understand the difference between dummy-node and non-dummy-node approaches
- Build clean, modular C code using `.h` and `.c` separation

## Supported Operations

- `construct_list()` – Initialize an empty list
- `append_node(list, value)` – Add a new node to the end
- `print_list(list)` – Print all values in the list
- `delete_list(list)` – Free all memory associated with the list

## Constraints

- Nodes store `int` values
- No dynamic resizing needed

## Project Structure

.
├── linked_list.c
├── linked_list.h
└── main.c

## Build and Run

To compile and run:

```bash
gcc main.c linked_list.c -o linked_list
./linked_list
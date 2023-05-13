#ifndef NODE
#define NODE

#include <malloc.h>

typedef struct structNode {
    int value;
    struct structNode *next;
} Node;

Node *get_empty_node(int value){
    Node *empty_node = malloc(sizeof(Node));
    empty_node->value = value;
    empty_node->next = NULL;
    
    return empty_node;
}

Node *get_last(Node *node_from){
    // Empty node
    if(node_from == NULL) return NULL;
    // Last node
    if (node_from->next == NULL) return node_from;
    // Continues seeking
    get_last(node_from->next);
}

void add_node(Node **node_from, int value) {
    Node *new_node = get_empty_node(value);

    if (*node_from == NULL) {
        *node_from = new_node;
    } else {
        if (value < (*node_from)->value) {
            new_node->next = *node_from;
            *node_from = new_node;
        } else {
            Node *current = *node_from;

            while (current->next != NULL && current->next->value < value) {
                current = current->next;
            }

            new_node->next = current->next;
            current->next = new_node;
        }
    }
}

#endif
#ifndef LIST
#define LIST

#include <malloc.h>
#include "node.c"

typedef struct structList {
    int length;
    Node *head;
} List;

List *new_list(){
    List *new = malloc(sizeof(List));
    new->length = 0;
    new->head = NULL;

    return new;
}

// void list_push(List *list, int value){
//     add_node(&list->head, value);
//     list->length++;

// }

void list_push(List *list, int value){
    add_node(&list->head, value);
    list->length++;
}

int list_length(List *list){
    /**
     * Nombramos el metodo al estilo de Javascript, 
     * ya que el nombre "size", como se utiliza en Java, quizas confunde en el entorno de C
     * Pero suena feo .^.
    */
    return list->length;
}

Node *list_get(List *list,int index){
    if (index < 0 || index >= list->length) return NULL;
    
    Node *cursor = list->head;
    while(index>0){
        cursor = cursor->next;
        index--;
    }

    return cursor;
}

int list_remove(List *list,int index){
    if (index < 0 || index >= list->length) return 0;

    if(index==0){
        list->head = list->head->next;
    } else {
        Node *cursor = list->head;
        Node *previous_cursor = NULL;
        while(index>0){
            previous_cursor = cursor;
            cursor = cursor->next;
            index--;
        }

        previous_cursor->next = cursor->next;
    }

    list->length--;


}

void list_print(List *list){
    if (list->length==0){ 
        printf("[]\n");
    } else {
        printf("[");
        Node *cursor = list->head;
        while(cursor->next != NULL){
            printf("%d,",cursor->value);
            cursor = cursor->next;
        }
        printf("%d]\n",cursor->value);
    }
}

#endif
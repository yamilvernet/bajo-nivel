#include <stdio.h>
#include "list.c"

int main() {

    List *prime_numbers = new_list();
    list_push(prime_numbers,2);
    list_push(prime_numbers,3);
    list_push(prime_numbers,5);
    list_push(prime_numbers,7);

    printf("La lista de primos tiene %d elementos: ",list_length(prime_numbers));
    list_print(prime_numbers);


    list_remove(prime_numbers,0);
    list_remove(prime_numbers,0);
    list_remove(prime_numbers,0);
    // list_remove(prime_numbers,0);
    list_remove(prime_numbers,4);

    int i = 0;
    while (i<6){
        if(list_get(prime_numbers,i)!=NULL){
            printf("Numero primo enla posicion %d: %d\n",i+1,list_get(prime_numbers,i)->value);
        } else {
            printf("No hay primos en posicion: %d\n",i+1);
        }
        i++;
    }

    return 0;
}
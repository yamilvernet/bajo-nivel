#include <stdio.h>
#include "list.c"

int main() {

    List *prime_numbers = new_list();
    list_push(prime_numbers,7);
    list_push(prime_numbers,5);
    list_push(prime_numbers,3);
    list_push(prime_numbers,2);


    list_remove(prime_numbers,0);
    list_remove(prime_numbers,1);


    printf("La lista de primos tiene %d elementos: ",list_length(prime_numbers));
    list_print(prime_numbers);

    return 0;
}
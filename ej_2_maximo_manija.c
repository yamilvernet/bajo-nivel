#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Es posible brindar argumentos al programa, una lista de numeros separados por coma
 * o se puede pasar el flag -i para introducir los elementos a traves del prompt de la terminal
 * Si no se pasa ningún argumento se toma la lista que viene por defecto. Se construye esta lista por defecto como un string para aprovechar el while.
 * 
 * Seria obligatorio validar los arguementos en produccion

*/

int main(int argc, char **argv){
    char * number;
    // Si se paso un argumento
    if((argv[1]) != NULL){
        // Si el argumento es el flag -i para introducir una lista
        if(strcmp(argv[1],"-i") == 0){
            char input[100];
            printf("Lista de numeros enteros separados por coma (ex: 20,30,40,50)\n> ");
            scanf("%s",input);
            number = strtok(input, ",");
        }else {
            // Si no se paso el flag -i entonces se paso una lista de numeros
            number = strtok(argv[1], ",");
        }
    } else {
        // Si no se paso ningun argumento se usa la lista por defecto
        char list[20] = "10,25,3,4,58,-9,10,2";
        number = strtok(list, ",");
    }

    // Se toma el primer valor de la lista
    int max = atoi(number);
    
    number = strtok(NULL, ",");
    //subsequent calls must specify NULL as the first argument, which tells the function to continue tokenizing the string you passed in first

    while (number!=NULL){
        if (atoi(number) > max) max = atoi(number);
        number = strtok(NULL, ",");
    }

    printf("El mayor de los números es el %d\n", max);

    return 0;
}
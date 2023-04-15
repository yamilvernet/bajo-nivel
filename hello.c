#include <stdio.h>

int main(){
    char nombre[100];
    int edad;

    printf("Ingrese su nombre: ");
    scanf("%s",nombre);
    printf("Ingrese su edad: ");
    scanf("%d",&edad);

    printf("Hola %s tu edad es %d años",nombre,edad);

    return 0;
}
#include <stdio.h>

int main(){
    char nombre[24];
    int edad;

    printf("Ingrese tu nombre y edad: ");
    scanf("%s %d",nombre, &edad);

    printf("Hola %s, tu edad es %d años \n",nombre,edad);

    return 0;
}
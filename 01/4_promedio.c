#include <stdio.h>

int main(){
    int average;

    for (int i = 0; i < 3; i++){
        int n;
        printf("Ingresa un numero: ");
        scanf("%d", &n);
        average += n;
    }

    average = average / 3;

    printf("El promedio es: %d\n",average);
}
#include <stdio.h>

int main(){
    // int numbers[] = {10,200,300,500,20,1,60,-9,52,152,99,100};
    // int numbers[] = {-10,-200,-300,-5000,-20,-1,-60,-9,-52,-152,-99,-100};
    int numbers[] = {1,0};
    // int numbers[] = {-10,0};
    
    int min = numbers[0];

    for (int i = 1; i < sizeof(numbers)/sizeof(numbers[0]); i++){
        if (numbers[i]<min) min=numbers[i];
    }
    
    printf("El mínimo es: %d\n",min);
}
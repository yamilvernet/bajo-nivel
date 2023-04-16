#include <stdio.h>

int main(){
    // int numbers[] = {10,200,300,500,20,1,60,-9,52,152,99,100};
    // int numbers[] = {-10,-200,-300,-5000,-20,-1,-60,-9,-52,-152,-99,-100};
    int numbers[] = {-10};
    // int numbers[] = {-10,0};
    
    int max = numbers[0];

    for (int i = 1; i < sizeof(numbers)/sizeof(numbers[0]); i++){
        if (numbers[i]>max) max=numbers[i];
    }
    
    printf("El máximo es: %d\n",max);
}
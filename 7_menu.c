#include <stdio.h>


int main(){
    char run = 1;

    /*
    * Frases para cada opción.
    * Usando el deference operator evitamos perdida de memoria y la declaracion de un array multidimensional
    */
    char *options[] = {
        "Un robot no hará daño a la Humanidad o, por inacción, permitir que la Humanidad sufra daño. (R. Daneel Olivaw)",
        "Un robot no hará daño a un ser humano, ni por inacción permitirá que un ser humano sufra daño.",
        "Un robot debe cumplir las órdenes dadas por los seres humanos, a excepción de aquellas que entren en conflicto con la primera ley.",
        "Un robot debe proteger su propia existencia en la medida en que esta protección no entre en conflicto con la primera o con la segunda ley."
    };

    int selected_option = -1;

    
    while (run){
        // Console clear
        printf("\e[1;1H\e[2J");

        int total_options = sizeof(options) / sizeof(options[0]);

        if(selected_option < 0){
            // Show main menu
            render_main_menu(options,total_options);
            scanf("%d",&selected_option);

            // Se comprueba si el input esta fuera de rango, menor a 0 o mayor al total de opciones 
            // (siempre habra uan opcion mas ya que la inicial es 0, pero esa opcion de mas sirve para salir)
            if ((selected_option < 0) || (selected_option > total_options)){
                // Si la opcion esta fuera de rango se establece en -1
                selected_option = -1;
            }

        } else if (selected_option < total_options){
            // Se muestra la frase seleccionada
            printf("Ley %d:\n\n%s",selected_option,options[selected_option]);
            
            // Returnlver atras ");
            int anything;
            scanf("%d",&anything);

            selected_option = -1;
        } else {
            run = 0;
            printf("Bye!\n");
        }
    }
    

}

void render_main_menu(options,total){
    printf("Leyes de la robotica de Asimov, seleccione una ley segun su numero\n\n");
    
    for (int i = 0; i < total; i++){
        printf("[%d] - Ley numero %d \n",i,i);
    }

    printf("[%d] - Salir",total);

    printf("\n\nIngrese una opcion: # ");
}
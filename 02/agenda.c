#include <stdio.h>
// #include "suma.h"

typedef struct {
    char *name;
    int age;
} Persona;

/**
 * Setea el member name de Persona, recibe un puntero a un struct de tipo Persona y un puntero a un char ya que el member name espera un puntero
*/
Persona set_name(Persona *persona, char *new_name){
    persona->name = new_name;
}

/**
 * Setea el member age de Persona, recibe un puntero a un struct de tipo Persona y un entero para la edad
*/
Persona set_age(Persona *persona, int new_age){
    persona->age = new_age;
}

/**
 * Recibe un puntero a un struct Persona y muestra los members name y age Persona en el puntero dado
*/
Persona show(Persona *persona){
    printf("%s %d años",persona->name,persona->age);
}

/**
 * Agenda que almacena hasta 10 struct Persona
*/
typedef struct {
    Persona *contacts[10];
    int count;
} Agenda;

/**
 * Inicializa y retorna Agenda
 * Para poder usar el bucle for es necesario conocer la cantidad de elementos que contiene el member contacts de Agenda
 * Para ello es necesario inicializar la agenda y establcer count en 0, ya que de otra forma contiene basura y no es posible guardar ni listar
*/
Agenda new_agenda(){
    Agenda a;
    a.count = 0;
    return a;
}

/**
 * Recibe dos punteros, uno a un tipo Agenda y otro a un tipo Persona
 * A traves del arrow operator se guarda el puntero de Persona en la agenda dada
 * Se aumenta el valor de count
*/
void add_contact(Agenda *agenda,Persona *persona){
    agenda->contacts[agenda->count] = persona;
    agenda->count++;
}

int main(){
    Persona yo;
    set_name(&yo, "Yamil");
    set_age(&yo, 26);

    Persona cj;
    set_name(&cj, "Carl Johnson");
    set_age(&cj, 29);

    // Inicializar una agenda
    Agenda agenda = new_agenda();
    // Agregar contactos
    add_contact(&agenda,&yo);
    add_contact(&agenda,&cj);

    // Recorrer los contactos existentes
    for (int i = 0; i < agenda.count; i++){
        printf("%d. ",i+1);
        show(agenda.contacts[i]);
        printf("\n");
    }
    
    return 0;
}
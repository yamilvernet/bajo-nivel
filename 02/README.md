## Structs
Declaración de tipos de datos, son una lista de variables agrupadas físicamente bajo un nombre en un bloque de memoria.

```
struct name (*opcional) {
   type member1;
   type member2;
};
```

### Typedef
Se usa para simplificar la sintaxis de declarar estructuras de datos 

```
typedef struct name {
   type member1;
   type member2;
} struct_alias;
```

### Importante
- Los `structs` no son objetos clásicos, no se inicializan.
- Al no poder inicializar las variables, con arrays es necesario crear funciones que hagan la inicialización

## Arrow operator
Obtiene el miembro llamado bar de la estructura a la que apunta foo.

```
void add_contact(Agenda *agenda,Persona *persona){
    agenda->contacts[agenda->count] = persona;
    agenda->count++;
}
```

En la primera linea del cuerpo de la función, se accede al `member` contacts del `struct` al que apunta agenda.




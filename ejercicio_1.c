#include <stdio.h>

void invertirCadena(char *inicio) {
    char *fin = inicio;
    char aux;

    // 1. Mover 'fin' al último carácter antes del '\0'
    while (*fin != '\0') {
        fin++;
    }
    fin--; 

    // 2. Intercambio de valores
    while (inicio < fin) {
        // --- TU CÓDIGO AQUÍ ---
        // Implementa el intercambio usando la variable 'aux'
        // Desplaza los apuntadores adecuadamente  
        aux = *inicio;
        *inicio = *fin;
        *fin = aux;

        inicio++;
        fin--;
    }
}

int main() {
    char palabra[] = "APUNTADORES";
    printf("Original: %s\n", palabra);
    invertirCadena(palabra);
    printf("Invertida: %s\n", palabra);
    return 0;
}

//Durante el ciclo de intercambio (swap), la condición de parada es while (inicio < fin). 
//Explica detalladamente qué es lo que se está comparando físicamente en esa instrucción (¿valores o direcciones?) Se estan comparando las direcciones de memoria y esto es para saber si el puntero que avanza desde la izquierda todavia no ha pasado al que viene desde la derecha y cuando se cruza el inicio con el fin ya no se cumple el ciclo y el ciclo se detiene.
// y qué sucedería si la condición fuera while (*inicio != *fin). En este caso ya no se estarían comparando las direcciones de memoria sino los valores almacenados en eses direcciones que en este caso son caracteres y aqui habria un problema ya que la palabra apuntadores tiene dos letras A y el ciclo se detendria en cuanto empiece ya que son iguales y la condicion sería en este caso falsa.

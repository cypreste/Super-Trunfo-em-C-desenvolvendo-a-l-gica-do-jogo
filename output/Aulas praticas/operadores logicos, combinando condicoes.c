#include <stdio.h>

int main () {

    int a = 10, b = 5;

    // Operador lógico AND (&&)
    if (a > 0 && b > 0) {
        printf("Ambos os numeros sao positivos.\n");
    } else {
        printf("Pelo menos um dos numeros e negativo.\n");
    }
    return 0;	
}

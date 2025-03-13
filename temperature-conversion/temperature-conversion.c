#include <stdio.h>

int main() {

    int celsius;
    int fahrenheit;
    int temperature;

    printf("Ingrese la temperatura: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("La temperatura ingresada en celsius, equivale a %d grados fahrenheit", fahrenheit);

    return 0;
}

#include <stdio.h>

int main() {

    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("El numero ingresado es par");
    } else {
        printf("El numero ingresado es impar");
    }

    return 0;
}

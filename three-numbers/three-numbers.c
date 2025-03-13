#include <stdio.h>

int main() {

    int number_one;
    int number_two;
    int number_three;

    printf("Ingrese el primer numero: ");
    scanf("%d", &number_one);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &number_two);

    printf("Ingrese el tercer numero: ");
    scanf("%d", &number_three);

    if (number_one > number_two && number_one > number_three) {
        printf("El numero mayor es %d ", number_one);
    } else if (number_two > number_one && number_two > number_three) {
        printf("El numero mayor es %d ", number_two);
    } else {
        printf("El numero mayor es %d ", number_three);
    }

    return 0;
}

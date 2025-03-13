#include <stdio.h>

int main() {

    int number;

    printf("Ingrese el numero del cual desea ver sus multiplos hasta el numero 10: ");
    scanf("%d", &number);

    printf("El numero ingresado es %d, a continuacion se muestran sus multiplos\n", number);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number*i);
    }

    return 0;
}

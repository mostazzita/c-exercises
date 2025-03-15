#include <stdio.h>

int main() {
    int number;
    int multiple;
    int multiple_total;
    int factorial;

    printf("Introduza un numero para calcular su factorial: ");
    scanf("%d", &number);

    multiple = number;

    while (number >= 1) {
        printf("%d! = %d (%d x %d) = %d\n", multiple, multiple, multiple, number, multiple * number);

        multiple_total += multiple * number;
        factorial = multiple * multiple_total;

        if (number == 1) {
                printf("%d! = %d (%d)\n", multiple, multiple, multiple_total);
                printf("%d! = %d\n", multiple, factorial);
        }

        number--;
    }
}

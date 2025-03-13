#include <stdio.h>

int main() {

    int result;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            result = result + i;
        }
    }

    printf("%d\n", result);

    return 0;
}

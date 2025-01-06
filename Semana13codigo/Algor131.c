#include <stdio.h>

int main() {
    int num, npares = 0, nimpares = 0;

    do {
        printf("INGRESA UN NUMERO ");
        scanf("%d", &num);

        if (num == 0) {
            printf("EL 0 NO CUENTA, INGRESA OTRO NUMERO\n");
        } else if (num > 0) {
            if (num % 2 == 0) {
                npares = npares + 1;
            } else {
                nimpares = nimpares + 1;
            }
        }

    } while (num >= 0);

    printf("EL TOTAL DE NUMEROS PARES ES:  %d\n", npares);
    printf("EL TOTAL DE NUMEROS IMPARES ES: %d\n", nimpares);

    return 0;
}



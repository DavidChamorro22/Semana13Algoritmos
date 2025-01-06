#include <stdio.h>

int main() {
    char respuesta;
    float dm, a, sumadm = 0, sumaa = 0;
    int ncipres = 0;

    do {
        printf("INGRESA EL DIAMETRO DEL TRONCO DE CIPRES: ");
        scanf("%f", &dm);
        printf("INGRESA LA ALTURA DEL TRONCO DE CIPRES: ");
        scanf("%f", &a);

        sumadm = sumadm + dm;
        sumaa = sumaa + a;
        ncipres = ncipres + 1;

        do {
            printf("DESEAS INGRESAR OTRO TRONCO, S=SI Y N=NO: ");
            scanf(" %c", &respuesta);

            if (respuesta != 'S' && respuesta != 'N') {
                printf("LA OPCION INGRESADA NO ES VALIDA, POR FAVOR INGRESA: S=SI Y N=NO\n");
            }

        } while (respuesta != 'S' && respuesta != 'N');

    } while (respuesta == 'S');

    if (ncipres > 0) {
        printf("PROMEDIO DE DIAMETRO: %.2f\n", sumadm / ncipres);
        printf("PROMEDIO DE ALTURA: %.2f\n", sumaa / ncipres);
    } else {
        printf("NO SE INGRESARON DATOS.\n");
    }

    return 0;
}

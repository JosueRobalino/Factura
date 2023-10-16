#include <stdio.h>
#include <stdlib.h>

int main() {
    char nombre[100];
    char cedula[20];
    char direccion[100];
    char fecha [11];
  
    printf("Ingrese el nombre: ");
    fgets(nombre, 20,stdin);

    printf("Ingrese la dirección: ");
    fgets(direccion,50,stdin);

    printf("Ingrese el número de cédula: ");
    fgets(cedula, 15, stdin);
  
    printf("Ingrese la fecha: ");
    fgets(fecha, 11, stdin);
    
  char productos[5][50] = {
        "Llantas (Precio: $150)",
        "Kit Pastillas de freno (Precio: $55)",
        "Kit de embrague (Precio: $180)",
        "Faro (Precio: $70)",
        "Radiador (Precio: $120)"
    };

    float precios[5] = {150.0, 55.0, 180.0, 70.0, 120.0};
    int cantidades[5];
    float subtotal = 0.0;
    float descuento = 0.0;

    printf("\nIngrese la cantidad de unidades de cada producto:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s: ", productos[i]);
        scanf("%d", &cantidades[i]);
        subtotal += cantidades[i] * precios[i];
    }

    if (subtotal <= 100) {
        descuento = 0.0;
    } else if (subtotal <= 500) {
        descuento = subtotal * 0.05;
    } else if (subtotal <= 1000) {
        descuento = subtotal * 0.07;
    } else {
        descuento = subtotal * 0.10;
    }

    float total = subtotal - descuento;

    printf("\n--- Factura ---\n");
    printf("Nombre: %s\n", nombre);
    printf("Dirección: %s\n", direccion);
    printf("Fecha: %s\n", fecha);
    printf("Número de cédula: %s\n", cedula);
    printf("\nDetalle de la compra:\n");

    for (int i = 0; i < 5; i++) {
        printf("%s: %d unidades x $%.2f = $%.2f\n", productos[i], cantidades[i], precios[i], cantidades[i] * precios[i]);
    }

    printf("\nSubtotal: $%.2f\n", subtotal);
    printf("Descuento: $%.2f\n", descuento);
    printf("Total a pagar: $%.2f\n", total);

    return 0;
}

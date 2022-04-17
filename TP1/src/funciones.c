#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>



void funKm(int* x){

    int cant;

    printf("Ingrese kilometros totales: ");
    cant = scanf("%d", x);
    while (*x<0 || cant==0){

        fflush(stdin);
        printf("Error, reingrese kilometros totales: \n");
        cant = scanf("%d", x);
    }
}


void ingPrecio(float* y, float* z){

    int cant;
    int not;

    printf("Ingrese precio del vuelo en Aerolineas: ");
    cant = scanf("%f", y);
    while (*y<0 || cant==0){

        fflush(stdin);
        printf("Error, reingrese el precio del vuelo en Aerolineas : \n");
        cant = scanf("%f", y);
    }

    fflush(stdin);
    printf("Ingrese precio del vuelo en Latam: ");
    scanf("%f", z);
    while (*z<0 || not==0){

        fflush(stdin);
        printf("Error, reingrese el precio del vuelo en Latam : \n");
        not = scanf("%f", z);
    }

}


void calcularMulti(float precio, float* precioPuntero, float valorOp){

    *precioPuntero = precio* valorOp;

}


void calcularDiv(float precio, float* precioPuntero, float valorOp){

    *precioPuntero = precio/ valorOp;
}



void calcularDif(float precioUno,float* diferencia, float precioDos){

    *diferencia = precioDos - precioUno;
    if(*diferencia<0){
        *diferencia = *diferencia * -1;

    }
}



void menu(){

        printf("1) Ingresar Kilometros:\n");
        printf("2) Ingresar Precios de Vuelos:\n");
        printf("3) Calcular todos los costos:\n");
        printf("4) Informar resultados\n");
        printf("5) Carga forzada de datos\n");
        printf("6) Salir\n");

}


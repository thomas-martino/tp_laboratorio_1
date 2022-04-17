#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
	setbuf(stdout,NULL);

    int opcion;
    int km=0;
    char salir;
    float precioAero=0;
    float precioLatam=0;
    float precioAeroDeb;
    float precioAeroCred;
    float precioLatamDeb;
    float precioLatamCred;
    float precioLatamBtc;
    float precioAeroBtc;
    float precioLatamKm;
    float precioAeroKm;
    float difPrecio;
    const float porcentajeDeb = 0.9;
    const float porcentajeCred = 1.25;
    const float valorBtc = 4606954.55;
    int cant;


    do{
        menu(); //muestra en pantalla el menu
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion){

        case 1:

            funKm(&km);
            break;

        case 2:
            ingPrecio(&precioAero,&precioLatam);
            break;

        case 3:
            if(km== 0){
                printf("No se puede calcular el costo, ingrese los KMs\n\n");
            }else{
                if(precioAero==0 || precioLatam==0){
                    printf("No se puede calcular el costo, ingrese el precio faltante\n\n");
                }else{
                    calcularMulti(precioAero,&precioAeroDeb, porcentajeDeb);
                    calcularMulti(precioLatam,&precioLatamDeb, porcentajeDeb);
                    calcularMulti(precioAero,&precioAeroCred, porcentajeCred);
                    calcularMulti(precioLatam,&precioLatamCred, porcentajeCred);
                    calcularDiv(precioLatam,&precioLatamBtc, valorBtc);
                    calcularDiv(precioAero,&precioAeroBtc, valorBtc);
                    calcularDiv(precioLatam,&precioLatamKm, km);
                    calcularDiv(precioAero,&precioAeroKm, km);
                    calcularDif(precioAero,&difPrecio, precioLatam);
                    printf("Costos calculados\n");
                    cant=1;

                }
            }
            break;

        case 4:

            if(cant!=1){
                printf("Error, se necesita calcular los datos antes de elegir esta opcion\n\n");
            }else{
                printf("Latam:\n");
            printf("a) Precio con tarjeta de debito: $%.2f\n",precioLatamDeb);
            printf("b) Precio con tarjeta de credito: $%.2f\n",precioLatamCred);
            printf("c) Precio pagando con bitcoin: $%.8f\n",precioLatamBtc);
            printf("d) Precio unitario: $%.2f\n\n",precioLatamKm);
            printf("Aerolineas:\n");
            printf("a) Precio con tarjeta de debito: $%.2f\n",precioAeroDeb);
            printf("b) Precio con tarjeta de credito: $%.2f\n",precioAeroCred);
            printf("c) Precio pagando con bitcoin: $%.8f\n",precioAeroBtc);
            printf("d) Precio unitario: $%.2f\n\n",precioAeroKm);
            printf("La diferencia de precio es: $%.2f\n",difPrecio);
            }
            break;

        case 5:
            km= 7090;
            precioAero = 162965;
            precioLatam = 159339;

            calcularMulti(precioAero,&precioAeroDeb, porcentajeDeb);
            calcularMulti(precioLatam,&precioLatamDeb, porcentajeDeb);
            calcularMulti(precioAero,&precioAeroCred, porcentajeCred);
            calcularMulti(precioLatam,&precioLatamCred, porcentajeCred);
            calcularDiv(precioLatam,&precioLatamBtc, valorBtc);
            calcularDiv(precioAero,&precioAeroBtc, valorBtc);
            calcularDiv(precioLatam,&precioLatamKm, km);
            calcularDiv(precioAero,&precioAeroKm, km);
            calcularDif(precioAero,&difPrecio, precioLatam);

            printf("KMs Ingresados: %d\n\n", km);
            printf("Aerolineas:\n");
            printf("a) Precio con tarjeta de debito: $%.2f\n",precioAeroDeb);
            printf("b) Precio con tarjeta de credito: $%.2f\n",precioAeroCred);
            printf("c) Precio pagando con bitcoin: $%.8f\n",precioAeroBtc);
            printf("d) Precio unitario: $%.2f\n\n",precioAeroKm);
            printf("Latam:\n");
            printf("a) Precio con tarjeta de debito: $%.2f\n",precioLatamDeb);
            printf("b) Precio con tarjeta de credito: $%.2f\n",precioLatamCred);
            printf("c) Precio pagando con bitcoin: $%.8f\n",precioLatamBtc);
            printf("d) Precio unitario: $%.2f\n\n",precioLatamKm);
            printf("La diferencia de precio es: $%.2f\n",difPrecio);
            break;

        case 6:
            printf("Desea salir del programa (s/n)?: \n");
            fflush(stdin);
            scanf("%c", &salir);
            break;

        default:
            printf("Opcion invalida, seleccione una opcion correcta.\n");
            break;

        }

    }while(salir != 's');



    return EXIT_SUCCESS;
}



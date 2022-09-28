/*Unidad 2.  Tramos
Autor: David Alejandro Moreno Chaparro
Fecha: 27/09/2022
Descripcion: Muestra el impuesto que corresponde segun la renta anual
*/
#include<iostream>
#include<stdio.h>

using namespace std;

main(){

float renta;

printf("�Cual es tu renta anual?");
scanf("%f", &renta);

if(renta>=1){
    if (renta<10000){
        printf("Tu impuesto es de 5%");
    }else if (renta>=10000 && renta<20000) {
        printf("Tu impuesto es de 15%");
    }else if(renta>=20000 && renta<35000){
        printf("Tu impuesto es de 20%");
    }else if(renta>=35000 && renta<=60000){
        printf("Tu impuesto es de 30%");
    }else {
        printf("Tu impuesto es de 45%");
    }



}

}

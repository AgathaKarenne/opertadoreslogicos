#include<stdio.h>
#include <math.h>

main(){


    //Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.

    double numero, raiz;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    raiz = sqrt(numero);

    printf("A raiz quadrada é %lf = %lf", numero, raiz);
    scanf("%lf", &raiz);

    if(numero == 0){

        printf("A raiz quadrada é positiva");


    }else if(numero != 0){

        printf("A raiz quadrada é negativa");
    }


}



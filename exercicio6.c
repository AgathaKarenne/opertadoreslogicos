#include<stdio.h>
#include<math.h>

main(){

    /*Codifique um programa que lê um número inteiro.
     A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número digitado é par. Se o número não for par, o programa não deve fazer nada.*/

     int numero;
     
     printf("Digite um numero");
     scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é par!\n", numero);
    }


}
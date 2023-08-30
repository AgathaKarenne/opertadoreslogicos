#include <stdio.h>

 main(){

    //Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. //

    float valorA, valorB, valorC, valorD, valorMaior, valorMenor;

    printf("Digite um valor:");
    scanf("%f", &valorA, &valorB, &valorC, &valorD, &valorMaior, &valorMenor);

    if(valorA < valorB){
       printf("Maior numero");
        
    }else if(valorB < valorC){
        printf("Menor valor");

    }else if(valorC < valorD){
        printf("Maior valor");

    }else{

        printf("Traga o valorMaior || valorMenor");
    }

    
}




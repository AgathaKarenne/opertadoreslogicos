#include<stdio.h>

main(){

    //Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores.//

    float numero;
    printf("Numero: ");
    scanf("%f", &numero);
    
    if(numero == 5){
        printf("\n Esse numero e igual a 5");
    
    }
    
    else if(numero == 200){
    
        printf("\n Esse numero e igual a 200");

    }
    
    else if(numero == 400){
        printf("\n Esse numero e igual a 400");

    }
    
    else{ 
        
        printf("\n Nao e igual a nenhuma alternativa!");
    }    
    
    if(numero >= 500 && numero <= 1000){

        printf("\n Esse numero esta no intervalo 500-100!");

    }
    
    else{
        
        printf("\n Esse numero nao esta no intervalo 500-100!");
    }
    
}
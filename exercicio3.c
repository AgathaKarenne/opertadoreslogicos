#include <stdio.h>

    main(){


        //Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).


    float valorA, valorB, valorC;

    printf("Digite aqui o valorA");
    scanf("%f", &valorA);
    printf("Digite aqui o valorB");
    scanf("%f", &valorB);
    printf("Digite aqui o valorC");
    scanf("%f", &valorC);

    if ( valorA < valorB < valorC ){
         printf("%f",&valorA, &valorB, &valorC);
         }
      else if (valorA < valorC <  valorB ) {
              printf("%f", &valorA, &valorC, &valorB);
              }
              else if ( valorB < valorA < valorC ) {
                   printf("%f", &valorB, &valorA, &valorC);
                   }
                   else if ( valorB < valorC < valorA ){
                        printf("%f", &valorB, &valorC, &valorA);
                        }
                        else if ( valorC < valorA < valorB ) {
                             printf("%d", &valorC, &valorA, &valorB);
                             }
                             else if ( valorC < valorB < valorA ) {
                                  printf("%f", &valorC, &valorB, &valorA);
                                  }
                                  else {
                                       printf("Esta e a ordem");
                                       }
       
}  
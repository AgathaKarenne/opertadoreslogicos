#include<stdio.h>

main(){

    //Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor)//

    int valorA, valorB, valorC;

    printf("Digite aqui o valorA");
    scanf("%d", &valorA);
    printf("Digite aqui o valorB");
    scanf("%d", &valorB);
    printf("Digite aqui o valorC");
    scanf("%d", &valorC);

    if ( valorA > valorB > valorC ){
         printf("%d",&valorA, &valorB, &valorC);
         }
      else if (valorA> valorC>  valorB ) {
              printf("%d", &valorA, &valorC, &valorB);
              }
              else if ( valorB> valorA> valorC ) {
                   printf("%d", &valorB, &valorA, &valorC);
                   }
                   else if ( valorB> valorC> valorA ){
                        printf("%d", &valorB, &valorC, &valorA);
                        }
                        else if ( valorC> valorA> valorB ) {
                             printf("%d", &valorC, &valorA, &valorB);
                             }
                             else if ( valorC> valorB> valorA ) {
                                  printf("%d", &valorC, &valorB, &valorA);
                                  }
                                  else {
                                       printf("Esta e a ordem");
                                       }
       
}


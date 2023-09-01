#include<stdio.h>

main(){

  /*Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. */
  
  int A = 10, B = 1, C = 9, D= 8, maior, menor;

  //*como descobrir o maior e o menor de todos ao mesmo tempo

  if(A > B && A > C && A > D){
        printf("A é maior de todos");
        //verificar que é menor

        if(B < A && B < C && B < D){
            printf("B é menor");
    
        }else if(C < B && C < D){
            printf("C é menor");

        }else{
            printf("D é menor");
        }
  }

  //verficando o maior de todos

  /*if(A > B && A > C && A > D){
        maior = A;

  }else if(B > A && B > C && B > D){

        maior = B;

  }else if(C > A && C > B && C > D){

        maior = C;

  }else{
        maior = D;
  }

  //verificando o menor de todos

  if(A < B && A < C && A < D){
        menor = A;

  }else if(B < A && B < C && B < D){

        menor = B;

  }else if(C < A && C < B && C < D){

        menor = C;

  }else{
        menor = D;
  }


  printf("Maior: %d,. Menor: %d", maior, menor);

  */

}
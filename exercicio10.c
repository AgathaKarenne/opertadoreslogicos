#include<stdio.h>
#include<math.h>

main(){

  int numeroA, numeroB, numeroC, delta, sqrtdelta;

  delta = B² - 4ac;
  delta: sqrtdelta = sqrt(delta);


  printf("Qual é o valor dos numeros:");
  scanf("%d", &numeroA, &numeroB, &numeroC);

  if(numeroA = 0 ){
    printf("o programa terminou");

  }else if(numeroA != 0){
    printf("a equação é valida");

  }else if(delta >= 0){
    printf("raiz1 = (-b + sqrtdelta) / 2a");
    printf("raiz2 = (-b - sqrtdelta) / 2a");
  
  }else if(delta < 0){
    printf("raiz1 = (-b + i.sqrt(-delta) )/2a");
    printf("raiz2 = (-b - i.sqrt(-delta) )/2a");
  }


  
}
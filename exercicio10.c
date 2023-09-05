#include<stdio.h>
#include<math.h>

main(){

  double numeroA, numeroB, numeroC, delta, sqrtdelta, x1, x2;

  printf("Qual é o valor dos numeros:");
  scanf("%lf %lf %lf", &numeroA, &numeroB, &numeroC);

  delta = numeroB * numeroB - 4 * numeroA  * numeroC;
  sqrtdelta = sqrt(delta);

  printf("%lf", sqrtdelta);

  if(numeroA == 0 ){
    printf("o programa terminou");
    

  }else if(delta < 0){
    printf("não é existe raiz");

  }else{

    if(delta == 0){
        x1 = (-numeroB + sqrtdelta)/ (2*numeroA);
        printf("raiz unica %lf", x1);
    }else{
         x1 = (-numeroB + sqrtdelta)/ (2*numeroA);
         x2 = (-numeroB - sqrtdelta)/ (2*numeroA);
         printf("x1 %lf", x1);
         printf("x2 %lf", x2);
    }
  }
  
}

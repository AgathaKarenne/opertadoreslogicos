#include<stdio.h>
#include<math.h>

main(){


   /*Dados três valores A, B e C, construa um algoritmo,
    que imprima os valores de forma descendente (do maior para o menor).*/

   int A = 10, B = 11, C = 12;

   if(A > B && A > C){
      printf("%d", A);
      
      if(B > C){
        printf("%d %d ", B, C);

      }else if(C > B){
        printf("%d %d ", C, B);

      }
   
   }else if(B > A && B < C){
        printf("%d", B);
        if(A > C){
            printf("%d %d" , B, C);
        }else if(C > A){
            printf("%d %d", C, A);

        }

   }else if(C > A && C > B){
        printf("%d", B);

        if(A > B){
            printf("%d %d" , A, B);
        }else if(B > A){
            printf("%d %d", B, A);

        }

   }

}


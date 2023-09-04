#include<stdio.h>

main(){

    /*Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2.
     Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos.*/

     double prova1, prova2, prova3, mediaPonderada;

     printf("Digite a media da nota: ");
     scanf("%lf", &prova1, &prova2, &prova3);
     
     mediaPonderada = ((prova1 * 1) + (prova2 * 1) + (prova3 * 3))/ 4;

     if(mediaPonderada > 7.0){
        printf("\nVoce foi aprovado, Parabéns! =)");
     
     }else if(mediaPonderada < 7.0){
        printf("\nVoce foi reprovado, Boa sorte na proxima! =(", mediaPonderada);
        
    }






}
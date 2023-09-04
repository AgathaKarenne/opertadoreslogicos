#include<stdio.h>

main(){

/*Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. As condições para aposentadoria são: • Ter pelo menos 65 anos;
 • Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */

 int idade, anosDetrabalho, minimoDaIdade, tempoDeTrabalho;

 printf("Digite a idade do trabalhador: ");
 scanf("%d", &minimoDaIdade);

 printf("Digite quantos anos de trabalho o servidor tem:");
 scanf("%d", &anosDetrabalho);

 printf("Digite a idade minima do trabalhador");
 scanf("%d", &minimoDaIdade);

 if(minimoDaIdade >= 65, anosDetrabalho >= 30, idade >= 60, tempoDeTrabalho >= 25){
    printf("Pode se aposentar");

 }else if(minimoDaIdade <= 65, anosDetrabalho <= 30, idade <= 60, tempoDeTrabalho <= 25){
    printf("Não pode se aposentar");
 }

}
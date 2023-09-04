#include <stdio.h>
#include<math.h>

 int main(){

   float salarioAtual, anosDeTrabalho, salarioReajustado;

   printf("reajuste de salario:\n");
   
   printf("Digite o salario atual: ");
   scanf("%f", &salarioAtual);
   
   printf("Digite o tempo de empresa: ");
   scanf("%f", &anosDeTrabalho);

  if(salarioAtual > 0 && salarioAtual <= 500 && anosDeTrabalho< 1){
		  salarioReajustado = salarioAtual + (salarioAtual * 0.25);
     
	}else if(salarioAtual > 500 && salarioAtual <= 1000 && anosDeTrabalho >= 1 && anosDeTrabalho <= 3){
				salarioReajustado = salarioAtual + (salarioAtual * 0.20) + 100;
    
	}else if(salarioAtual > 500 && salarioAtual <= 1000){
				salarioReajustado = salarioAtual + (salarioAtual * 0.20);
    
	}else if(salarioAtual > 1000 && salarioAtual <= 1500 && anosDeTrabalho >= 4 && anosDeTrabalho <= 6){
			salarioReajustado= salarioAtual + (salarioAtual * 0.15) + 200;
    
	}else if(salarioAtual > 1000 && salarioAtual <= 1500){
		  salarioReajustado = salarioAtual + (salarioAtual * 0.15);
    
	}else if(salarioAtual > 1500 && salarioAtual <= 2000 && anosDeTrabalho >= 7 && anosDeTrabalho <= 10){
		  salarioReajustado = salarioAtual + (salarioAtual * 0.10) + 300;
    
	}else if(salarioAtual > 1500 && salarioAtual <= 2000){
		  salarioReajustado = salarioAtual + (salarioAtual * 0.10);
    
	}else if(salarioAtual > 2000 && anosDeTrabalho >= 10){
	      salarioReajustado = salarioAtual + 500;
    
	}else if(salarioAtual > 2000 && anosDeTrabalho < 10){
		    salarioReajustado = salarioAtual;
    
	}else{
		    printf("\nDados Invalidos!!!");
  }
   
}



    
  

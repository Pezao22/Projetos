#include <stdio.h>
#include <stdlib.h>

main(){
	
	int operacao,num,num2,total;
	
	printf("Mini Sistema de Calculadora [BETA]\n\n");
	printf("Escolha uma opecao abaixo e digite o numero correspondente !\n\n");
	printf("1 - SOMA          2- SUBTRACAO \n");
	printf("3 - DIVISAO       4- MULTIPLICACAO \n");	
	scanf("%d",&operacao);
	
	if (operacao == 1) 
	   {		
		  	printf("Entre com um numero inteiro !\n");
			scanf("%d",&num);		
			printf("Entre outro numero inteiro\n");
			scanf("%d",&num2);
			total = (num+num2);				  	
	   } 
	else if (operacao == 2)
	   { 
		  	printf("Entre com um numero inteiro !\n");
			scanf("%d",&num);		
			printf("Entre outro numero inteiro\n");
			scanf("%d",&num2);
			total = (num-num2);
  		} 
	else if (operacao == 3)	
	   {	  	
	  	printf("Entre com um numero inteiro !\n");
		scanf("%d",&num);		
		printf("Entre outro numero inteiro\n");
		scanf("%d",&num2);
		total = (num/num2);	  	
  	   }
	else if (operacao == 4)	
	  {
	  	printf("Entre com um numero inteiro !\n");
		scanf("%d",&num);		
		printf("Entre outro numero inteiro\n");
		scanf("%d",&num2);
		total = (num*num2);
	  	
	  } 	
	
	printf("Resultado Final %d\n",total);
	
}

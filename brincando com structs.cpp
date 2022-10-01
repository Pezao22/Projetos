

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

cadas_print(){
	
	printf("\n---------- Cadastro dos Usuarios -----------\n\n\n");
	
}

ler_print(){
	
	printf("\n\n --------- Lendo os dados da struct ---------\n\n");
}

int main(void)
{
	int i;
  /*Criando a struct */
  struct cadastro {
  	
    char nome[20];
    char sobre[20];
    char cpf[11];
    char rg[7];
    
  };
  
  struct cadastro ficha[2]; /// Declarando a struct como vetor de 10 posi�oes
  
  for(i=0; i<2; i++){  /// Armazenando dados dentro das variaveis da struct
  	
  cadas_print();
  
	  printf("Nome  ......: ");
	  scanf ("%s%*c",&ficha[i].nome);
	  
	  printf("Sobre nome ......: ");
	  scanf ("%s%*c",&ficha[i].sobre);
	  
	  printf("CPF ......: ");
	  scanf ("%s%*c",&ficha[i].cpf);
	  
	  printf("RG ......: ");
	  scanf ("%s%*c",&ficha[i].rg);
	  
  	system("cls");
	
  }
  
  for(i=0; i<2; i++){  /// Lendo dados da Struct
	ler_print();
	
	printf("Nome ...........: %s %s \n", ficha[i].nome,ficha[i].sobre);
	printf("Cpf ...........: %s \n", ficha[i].cpf);
	printf("Rg .....: %s \n", ficha[i].rg);
	
  }
  
  
  getch();
  return(0);
}

//ANTECESSOR E SUCESSO DE UM N�MERO

#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(){


	setlocale(LC_ALL,"Portuguese");
	
	//DECLARANDO VARIAVEIS
	int num1=0,anti=0,suc=0;
	
	
	//INSERINDO O NUMERO 
	printf("\t*****Antecessor e Sucessor do N�mero***");
	printf("\nDigite o n�mero: ");
	scanf("%i", &num1);
	
	anti=num1-1;
	suc=num1+1;
	
	printf("\t\n*****Antecessor e Sucessor do N�mero***");
	printf("\nO antecessor de %i � %i e o seu sucessor � %i", num1,anti,suc);
	
	getch();
	return 0;
	
		
}

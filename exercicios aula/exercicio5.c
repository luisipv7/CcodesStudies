#include <stdio.h>
#include <stdlib.h>

/* 5. Desenvolva um programa que calcule um sal�rio informado acrescido de 15%. Mostre o
sal�rio atual e o novo sal�rio corrigido. */

int main(int argc, char *argv[]) {
	
		float salario;
		float total;
		float acrescimo;
		
		acrescimo = 1.15;
			printf("Qual e o seu salario?\n",salario);
				scanf("%f",&salario);
					total = salario*acrescimo;
			printf("O seu salario e de:%2.2f", total);
			
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//biblioteca de palavras com acentos e virgulas linguagens

/* 11. A partir da idade informada de uma pessoa, desenvolva um programa que informe a sua
classe eleitoral, sabendo que menores de 16 n�o votam (n�o votante), que o voto �
obrigat�rio para adultos entre 18 e 65 (eleitor obrigat�rio) e que o voto � opcional para
eleitores entre 16 e 18, ou maiores de 65 (eleitor facultativo). */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");// para configurar a biblioteca que antes fora mencionada.
	int idade;
	
	printf("Digite sua idade:",idade);
	scanf("%i",&idade);
	if(idade<16){
		printf("N�o votante");
	}
	else if(idade>=18 && idade<=65){
		printf("Seu voto � obrigat�rio");
		
	}
	else{
		printf("Seu voto � facultativo.");
	}
	return 0;
}

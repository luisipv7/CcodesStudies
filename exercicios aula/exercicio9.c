#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 9. Para doar sangue é necessário ter entre 18 e 67 anos. Desenvolva um programa em C
que leia a idade de uma pessoa e diga se ela pode doar sangue ou não.  */

int main(int argc, char *argv[]) 

{
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	
	
	printf("Digite sua idade\n",idade);
	scanf("%i",&idade);
	
	if(idade>=18 && idade<=67){
		printf("Você pode doar sangue");
	}
	else
	{
		printf("Voce não tem idade pra doar sangue");	
	}
	
	
	return 0;
}

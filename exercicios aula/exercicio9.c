#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 9. Para doar sangue � necess�rio ter entre 18 e 67 anos. Desenvolva um programa em C
que leia a idade de uma pessoa e diga se ela pode doar sangue ou n�o.  */

int main(int argc, char *argv[]) 

{
	setlocale(LC_ALL,"portuguese");
	
	int idade;
	
	
	printf("Digite sua idade\n",idade);
	scanf("%i",&idade);
	
	if(idade>=18 && idade<=67){
		printf("Voc� pode doar sangue");
	}
	else
	{
		printf("Voce n�o tem idade pra doar sangue");	
	}
	
	
	return 0;
}

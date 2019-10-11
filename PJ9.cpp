#include <iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
	{
		char C[50];
		char Luis[4];
		printf("Digite os nomes dos candidatos:");
		gets(C);
		if(strcmp(C,Luis))
			{
				printf("Liberado");
		}
		else
			{
				printf("Individuo Procurado pela policia");
		}
			
		getch()	;
	return (0);
}

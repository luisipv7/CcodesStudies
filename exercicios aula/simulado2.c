#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<locale.h>
#define SENHACORRETA 1234
#define P_LEITE 2.98
#define P_MAR 4.9
#define P_PAO 0.5
#define P_GEL 12.9
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL,"portuguese");	
	int senha,menuprod;
	char opcaoMenu;
	
	do{
		printf("Digite a senha:",senha);
		scanf("%i",&senha);
		system("cls");
		if(senha!=SENHACORRETA) printf("Senha incorreta.\n Digite novamente....\n\n");
	
	}while(senha!=SENHACORRETA);/*fechando la�o da senha.*/
	
		do{
		
		printf("\tMenu de Op��es:\n");
		printf("1 - Produtos\n");
		printf("2 - Cupom Fiscal\n");
		printf("S - Encerrar Sistema\n");
		fflush(stdin);
		scanf("%c",&opcaoMenu);
		opcaoMenu=toupper(opcaoMenu);
		switch(opcaoMenu){
			
			case'1':
				do{
				
				printf("\t\tMenu de produtos:\n");
				printf("1 - Leite.\n");
				printf("2 - � Margarina � Pote � kg.\n");
				printf("3 - � P�o Franc�s.\n");
				printf("4 - Geleia � Pote � kg.\n");
				scanf("%i",&menuprod);
				if(menuprod<1 || menuprod>4) printf("\n\t\tSelecione a op��o correta.\n");
			}while(menuprod<1 || menuprod>4);
				break;
				
				case'2':
					break;
					
					case'3':
						break;
			default: printf("\n\n\t\t==> ERRO MOTHERFUCKER!!!!!!!!!\n");
			
			
			
		}
		}while(opcaoMenu!='S');/*fechando la�o do menu*/
				
	
	
	return 0;
}

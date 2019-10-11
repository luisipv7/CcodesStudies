#include<stdio.h>
#include<ctype.h>
#include<locale.h>
#include<stdlib.h>
#define SENHA_SISTEMA 1234
/* preços dos produtos*/
#define P_LEITE 2.98
#define P_PAO 0.5
#define P_MAR 4.9
#define P_GEL 12.9

main(){
	setlocale(LC_ALL,"portuguese");
	int senhaUsuario,produto,qtde,zerar;
	int contLeite=0,contPao=0,contMar=0,contGel=0;
	char menu;
	float cupom=0;
	do{
		printf("\n Informe a senha ==> ");
		scanf("%i",&senhaUsuario);
		system("cls");
		if(senhaUsuario!=SENHA_SISTEMA) printf("\n\t ==> Senha inválida! Tente novamente\n");
	}while(senhaUsuario!=SENHA_SISTEMA);
	/*inicia o programa*/
	do{
		printf("\n1 - Produtos");
		printf("\n2 - Cupom Fiscal");
		printf("\nS - Sair do Sistema ==>  ");
		fflush(stdin);
		scanf("%c",&menu);
		menu=toupper(menu);
		switch (menu){
			case '1':
				do{
					printf("\n\t1- Leite");
					printf("\n\t2 – Margarina – Pote ½ kg");
					printf("\n\t3 – Pão Francês");
					printf("\n\t4 - Geleia – Pote ½ kg ==>  ");
					scanf("%i",&produto);
					if(produto<1 || produto>4) printf("\n\t Código Inválido! Tente novamente!!\n\n");
				}while(produto<1 || produto>4); /*fecha teste do menu de produtos*/
				do{
				printf("\n Informe a quantidade ==> ");
				scanf("%i",&qtde);
				if(qtde<1) printf("\n\t Quantidade inválida! Digite novamente!\n\n");
				}while(qtde<1);/*fecha teste da quantidade*/
				system("cls");
				switch(produto){
					case 1:
						printf("%i Leite(s)\n",qtde);
						contLeite+=qtde;
						cupom+=(qtde*P_LEITE);
					break;
					case 2:
						printf("%i Margarina(s)\n",qtde);
						contMar+=qtde;
						cupom+=(qtde*P_MAR);
					break;
					case 3:
						printf("%i Pães\n",qtde);
						contPao+=qtde;
						cupom+=(qtde*P_PAO);
					break;
					case 4:
						printf("%i Geléia(s)\n",qtde);
						contGel+=qtde;
						cupom+=(qtde*P_GEL);
					break;
					
				}/*fecha switch dos produtos*/
			
			
			break;
			case '2':
				system("cls");
				printf("\n########### CUPOM FISCAL #####################################");
				printf("\nQtde\t\tITEM\t\tUNITARIO\t\tTOTAL");
				if(contLeite>0) printf("\n%i\t\t%s\t\t%.2f\t\t\t%.2f",contLeite,"LEITE",P_LEITE,contLeite*P_LEITE);
				if(contMar>0) printf("\n%i\t\t%s\t%.2f\t\t\t%.2f",contMar,"MARGARINA",P_MAR,contMar*P_MAR);
				if(contPao>0) printf("\n%i\t\t%s\t\t%.2f\t\t\t%.2f",contPao,"PAO",P_PAO,contPao*P_PAO);
				if(contGel>0) printf("\n%i\t\t%s\t\t%.2f\t\t\t%.2f",contGel,"GELÉIA",P_GEL,contGel*P_GEL);
				printf("\n\t\t\t\t\t\t TOTAL R$ %.2f",cupom);
			printf("\n########################################################################");
			printf("\n\t Digite \n\t1 - Zerar \n\t2 - Continuar \n");
			scanf("%i",&zerar);
			if(zerar==1){
				contLeite=contPao=contMar=contGel=cupom=0;
				printf("\n\t ==> Cupom Encerrado!!");
			} else{
				printf("\n\t ==> Cupom aberto!!");
			}
			
			
			break;
			case 'S':
			
			
			break;
			default: printf("\n\t ==> Erro na escolha!!\n\n");
		
		}/* fecha switch*/
	}while(menu!='S');/*fecha do..while do menu principal*/
}

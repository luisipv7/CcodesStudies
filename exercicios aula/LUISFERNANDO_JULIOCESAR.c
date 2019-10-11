#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<ctype.h>
#define NIKE 219.9
#define PUMA 199.9
#define ADIDAS 549.9
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])

 {
 	setlocale(LC_ALL,"portuguese");
 	int senha,senhacorreta,qtdNike,qtdPuma,qtdAdidas,qtd;
 	char escolha; 
 	float total,nike,puma,adidas,vlrnike,vlrpuma,vlradidas,vlrtotalnike,vlrtotalpuma,vlrtotaladidas,qtdetotalnike=0,qtdetotalpuma=0,qtdetotaladidas=0;
	senhacorreta=1234;
	do{
		
		printf("Digite sua senha>",senha);
 		scanf("%i",&senha);
 		system("cls");
	}while(senha!=senhacorreta);
	
 		if(senha==senhacorreta)
	 {
	 	do{
	 	system("cls");
	 	printf("TABELA DE PRECOS\n");
	 	printf("1- MARCA: Nike MODELO:The Air Overplay VALOR: 219,90 \n");
	 	printf("2- MARCA: Puma MODELO: Futue Cat VALOR: 199,90\n");
	 	printf("3- MARCA: Adidas MODELO:Springlade VALOR: 549,90\n");
	 	printf("C- Cupom Fiscal.\n");
	 	printf("Selecione a opção ==>");
	 	fflush(stdin);
	 	scanf("%c",&escolha);
	 	if(toupper(escolha)!='C' || escolha>=1 && escolha<=3)
		 {
		 	switch(escolha){
		 		case '1':
		 			system("cls");
					printf("Quantos iten vc deseja comprar\n");
		 			scanf("%i",&qtd);
		 			qtdNike=qtd;
		 			vlrnike=NIKE*qtdNike;
		 			printf("\nVc comprou %i produtos da marca Nike",qtdNike);
		 			printf("\ne o valor unitario e de 219.90 \n");
		 			printf("");
		 			qtdetotalnike+=qtdNike;
		 			vlrtotalnike+=vlrnike;
					break;
		 			case '2':
		 			system("cls");
					printf("Quantos iten vc deseja comprar\n");
		 			scanf("%i",&qtd);
		 			qtdPuma=qtd;
		 			vlrpuma=PUMA*qtdPuma;
		 			printf("\nVc comprou %i produtos da marca Puma",qtdPuma);
		 			printf("\ne o valor unitario e de 219.90");
		 			qtdetotalpuma+=qtdPuma;
		 			vlrtotalpuma+=vlrpuma;
		 			printf("");
					break;
		 			case '3':
		 			system("cls");
		 			printf("Quantos iten vc deseja comprar\n");
		 			scanf("%i",&qtd);
		 			qtdAdidas=qtd;
		 			vlradidas=ADIDAS*qtdAdidas;
		 			printf("\nVc comprou %i produtos da marca Adidas",qtd);
		 			printf("\ne o valor unitario e de 219.90 suas compras foram de %2.2f\n\n",vlradidas);
		 			vlrtotaladidas+=vlradidas;
					qtdetotaladidas+=qtdAdidas;
					printf("");
		 			break;
		 			case 'C':
		 			printf("\n\t\t######Cupom fiscal######\n");
		 			printf("\nQTDE\t\t\t\t\tDESCRIÇÃO\t\t\t VLR UNIT.\t\t\t VLR TOTAL\n");
		 			printf("\n %i \t\t\t\t\tAdidas Springlade\t\t\t %2.2f\t\t\t %f\n ",qtdetotaladidas,ADIDAS,vlrtotaladidas);
		 			total=vlrtotaladidas;
					 break;
					 default:
					 	printf("\n\t ==> Opção Inválida!!");
			 }
			 
		 }
		 }
 		
	 
	 while(toupper(escolha)!='C');
	printf("\n\t ==> A pagar ==> R$ %.2f\n\n",total);
	 	
	return 0;}
}

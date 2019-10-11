#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x;
	int ano;
	int ID;
	printf("Digite sua idade:");
	scanf("%d",&ID);
	printf("digite o ano atual:");
	scanf("%d",&x);
	ano=x-ID;
	printf("Seu ano de nascimento foi:%d",ano);
	return (0);
}

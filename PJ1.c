#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int Dias;/*declaração de variaveis*/
	float Anos;
	printf("entre com os dias:");/*entrada dos dados dos dias*/
	scanf("%d",&Dias);
	Anos=Dias/365.25;/*conversão dos dias em anos*/
	printf("\n\n%d dias equivalem a %f anos.\n",Dias,Anos);
	return (0);
}

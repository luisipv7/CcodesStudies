#include <iostream>
#include<stdio.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float a;
	float b;
	float mult;
	printf("Insira o valor correspondente ao salário mensal:\n",a);
	scanf("%f",&a);
	printf("Insira os valores referentes aos gastos:\n",b);
	scanf("%f",&b);
	mult=a-b;
	printf("O resultado e %f",mult);
	return (0);
}

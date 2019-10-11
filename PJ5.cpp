#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	char a;
 	printf("Digite um caractere e veja-o em decimal, octal e hexadecimal:");
 	scanf("%c",&a);
 	printf("\n %c=%d em decimal, %o em octal e %x em hexadecimal.\n",a,a,a,a);
	return 0;
}

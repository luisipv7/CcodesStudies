#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add(int x, int y)
{
	cout <<"In ADD(), recebe " <<x <<" e " << y << "\n" ;
	return(x+y);
}

int main() {
	cout << "Eu sou o main () ! \n";
	int a, b, c;
	cout <<" Entre com dois numeros: ";
	cin >> a;
	cin >> b;
	cout << "\nChamando o ADD () \n";
	c=add (a,b);
	cout << "\nVoltando para a main ().\n";
	cout << 
	return 0;
}

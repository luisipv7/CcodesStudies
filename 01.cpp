#include <iostream>

int add(int x, int y)
{
	std::cout <<"In ADD(), recebe " <<x <<" e " << y << "\n" ;
	return(x+y);
}

int main() {
	std::cout << "Eu sou o main () ! \n";
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

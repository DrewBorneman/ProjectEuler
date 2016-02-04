#include<iostream>
#include<fstream>
using namespace std;
int main () {
	char prod1=0;
	char prod2=0;
	char prod3=0;
	char prod4=0;
	char prod5=0;
	long long product;
	long long greatest = 0;
	ifstream number;
	number.open ("number.txt");
	prod1 = number.get()-48;
	prod2 = number.get()-48;
	prod3 = number.get()-48;
	prod4 = number.get()-48;
	prod5 = number.get()-48;

	while (!number.eof() ) {
	product = prod1*prod2*prod3*prod4*prod5;
	if (product > greatest)
		greatest = product;
	prod5 = prod4;
	prod4 = prod3;
	prod3 = prod2;
	prod2 = prod1;
	prod1 = number.get()-48;
	}
	cout <<"Greatest number is " << greatest << ".\n";
	number.close();
	return 0;
}
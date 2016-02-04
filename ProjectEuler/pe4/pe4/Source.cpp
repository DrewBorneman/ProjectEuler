#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int PalindromeCheck (string product);

int main () {
	int prod1 = 1;
	int prod2 = 1;
	int product;
	string prodstring;
	int lastpalin = 1;
	bool ispalindrome = false;
	while (prod1 < 1000) {
		prod2 = 1;

			while (prod2 < 1000) {
				product = prod1*prod2;	
				prodstring = to_string(product);
				ispalindrome = PalindromeCheck (prodstring);
				if (ispalindrome == true && product>lastpalin) {
					cout << product << endl;
					lastpalin = product;
				}
				prod2++;
			}

		prod1++;
	}
	cout <<endl <<endl << "The largest is " <<lastpalin <<endl;
	return 0;
}

int PalindromeCheck (string prodstring) {
	bool ispalindrome = false;
	string reverse;
	reverse.resize(prodstring.length(), ' ');
	char movechar;
	int point = prodstring.length() - 1;
	int reversepoint = 0;

	while (point!=-1) {
		movechar = prodstring.at(point);
		reverse.at(reversepoint) = movechar;
		++reversepoint;
		--point;
	}
	if ((prodstring.compare(reverse)) == 0) 
		ispalindrome = true;

	return ispalindrome; 
}
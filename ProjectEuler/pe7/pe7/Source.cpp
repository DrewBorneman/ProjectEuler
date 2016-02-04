#include <iostream>
using namespace std;
int main () {
	int number = 4;
	int check = 2;
	bool isprime;
	int primecount = 2;
	cout << 2 << endl << 3 <<endl;
	while(primecount<10003){
		for (check = 2; check < number; check++) {
			if (number%check == 0) {
				isprime = false;
				break; }
			isprime = true;
		}
		if (isprime == true){
			cout << number << endl;
			++primecount;}
		++number;
		isprime = false;
		}
		return 0;
	}
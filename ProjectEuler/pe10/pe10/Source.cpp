#include <iostream>
using namespace std;
int main () {
	int number = 4;
	int check = 2;
	bool isprime;
	int primecount = 2;
	long long primesum = 5;
	while(number<2000000){
		for (check = 2; check < number; check++) {
			if (number%check == 0) {
				isprime = false;
				break; }
			isprime = true;
		}
		if (isprime == true){
			cout << number << endl;
			primesum = primesum + number;
			++primecount;}
		++number;
		isprime = false;
		}
	cout << "Total is " << primesum << endl;;
		return 0;
	}
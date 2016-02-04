#include<iostream>

using namespace std;

int main () {

	long long number = 600851475143;
	long long check;
	double temp;

	for (check = 2; check < number; check++) {
		temp = number%check;
		if (temp==0) {
			cout << check << endl;
		}
	}
return 0;
}
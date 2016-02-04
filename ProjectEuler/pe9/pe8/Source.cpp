#include<iostream>
#include <cmath>
using namespace std;
int main () {
	double a = -100;
	double b = -99;
	double c = -98;
	int x = 1;
	double total = 0;
	double answer;
	while (a < 1000) {
		a++;
		b = a+1;
		while (b < 1000){
			b++;
			c = sqrt((a*a) + (b*b));
			if (c == ((int)c)) {
				total = a + b + c;
				if(total ==1000) {
				cout << "The answer is " << a << " and " << b << " and " << c << " Total: " << total << endl;
				answer = a * b * c;
				cout.precision(10);
				cout << "Answer: " << answer << endl;
				}
			}
		}
	}

	return 0;
}
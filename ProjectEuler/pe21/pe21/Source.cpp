#include<iostream>

using namespace std;

int dSum(int i){
	int sum = 0;

	for(int x = 1; x<i; x++){

		if(i%x==0){
			sum +=x;
		}

	}
	return sum;
}
int main() {
	int total = 0;
	int x = 0;
	int y = 0;
	for(int c = 1; c<=10000; c++){
		x = dSum(c);
		y = dSum(x);
		if(y==c && x != y){
			total += c;
		}
	}

			cout << total << endl;

	return 0;
}
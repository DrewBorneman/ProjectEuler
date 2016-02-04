#include<iostream>
#

using namespace std;

int getTriangleNumber(int index){
	int triangle = 0;

	for(int x=1; x<index; x++){
		triangle = triangle + x;
	}

	return triangle;
}

int getDivisors(int triangle){
	int divisors = 0;
	
	for(int x = 1; x<=triangle; x++){
		if(triangle%x==0){
			divisors++;
		}
	}
	return divisors;
}
int main() {

	int counter = 1;
	int triangle = 0;
	int divisors = 0;

	do {
		triangle = getTriangleNumber(counter);
		divisors = getDivisors(triangle);
		cout << triangle << "      " << divisors << endl;
		counter++;
	}while(divisors<500);

	return 0;
}
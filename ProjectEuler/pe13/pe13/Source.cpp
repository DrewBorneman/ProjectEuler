#include<iostream>
#include<fstream>

using namespace std;

int main () {
	ifstream inFile;
	inFile.open("input.txt");

	double total = 0;
	double input = 0;

	cout.precision(11);

	for(int x = 0; x<100; x++){

		inFile >> input;
		total += input;

		}

	cout << total;
	return 0;
}
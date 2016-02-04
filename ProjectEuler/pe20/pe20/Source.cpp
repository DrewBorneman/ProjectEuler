#include<iostream>
#include<fstream>
using namespace std;

inline double Fact(double x) {
  return (x == 1 ? x : x * Fact(x - 1));
}
int main() {
	int total = 0;
	char temp = 0;
	ifstream inFile;
	inFile.open("inData.txt");
	
	for(int x = 0; x<159; x++){
		inFile.get(temp);
		total+=(temp-48);
	}

	cout << total << endl;

	cout.precision(550);
	return 0;
}
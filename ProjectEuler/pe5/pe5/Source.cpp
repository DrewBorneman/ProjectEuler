#include<iostream>
using namespace std;
int main () {
	int number = 2;
	int counter = 1;
	bool gotit = false;
	do {
		for(counter = 1; counter <21; counter++){
			if (number%counter != 0)
				break;
			if (counter > 19)
				gotit = true;
		}
	if (gotit == true){
		cout << "The answer is " << number << "!\n";
		break;}
	++number;
	} while (0 ==0);
	return 0;
}
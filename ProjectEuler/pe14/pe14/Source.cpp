#include<iostream>

using namespace std; 

int main() {
	
	unsigned int  startNumber = 1;
	unsigned int currentNumber = 0;
	unsigned int terms;
	unsigned int longestTerms = 0;
	unsigned int longestNum = 0;

	for(startNumber = 1; startNumber < 1000000; startNumber++){

		terms = 1;
		currentNumber = startNumber;

		while(currentNumber != 1){
			if(currentNumber%2==0){
				currentNumber = currentNumber/2;
				terms++;
			}
			else{
				currentNumber = (currentNumber * 3) + 1;
				terms++;
			}
		//	if(terms<300){
			//cout << currentNumber << "          " << terms << endl;
		//	}
		}

		//if(startNumber%101 == 0){
			cout << startNumber << "        " << terms << endl;
	//	}
		if(terms>longestTerms){
			longestTerms = terms;
			longestNum = startNumber; 
		}
	}
	cout << "End" << endl;
	cout << longestTerms << "     " << longestNum << endl;
	return 0;
}
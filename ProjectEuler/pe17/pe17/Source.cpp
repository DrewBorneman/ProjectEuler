#include<iostream>
#include<string>
#include<fstream>

using namespace std; 

int main() {

	ofstream outFile;
	outFile.open("numbers.txt");
	string numbers[10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	string teensNumbers[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	string tens[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	int totalDigits = 0;
	int currentNumber = 0;
	string currentString;
	int firstDigit = 0;
	int secondDigit = 0;
	int thirdDigit = 0;
	const string h1 = "onehundred";
	const string t = "onethousand";
	const string h100 = "hundred";
	 
	for(currentNumber=1; currentNumber<10; currentNumber++){
		currentString = numbers[currentNumber];
		outFile << currentString << endl;
		totalDigits+=currentString.length(); cout << currentString << endl;
	}

		for(currentNumber=10; currentNumber<20; currentNumber++){
		currentString = teensNumbers[currentNumber-10];
		outFile << currentString << endl;
		totalDigits+=currentString.length(); cout << currentString << endl; cout << currentString << endl;
	}

		for(currentNumber=20; currentNumber<100; currentNumber++){
			firstDigit = (currentNumber / 10);
			secondDigit = currentNumber % 10;
			currentString = tens[firstDigit];
			if(secondDigit!=0){
			currentString += numbers[secondDigit];
			}
		outFile << currentString << endl;
		totalDigits+=currentString.length(); cout << currentString << endl;
		}

		totalDigits += h1.length();	

		for(currentNumber=101;currentNumber<1000;currentNumber++){``````	
			firstDigit = currentNumber / 100;
			secondDigit = (currentNumber/10)%10;
			thirdDigit = currentNumber%10;

			currentString = numbers[firstDigit] + h100;

				if(!(secondDigit==0 && thirdDigit==0)){
					currentString += "and";
				}

			if(secondDigit==1){
				currentString += teensNumbers[thirdDigit];
			}
			else{

						currentString += tens[secondDigit];
			if(thirdDigit!=0){
			currentString += numbers[thirdDigit];
			}
			}
		outFile << currentString << endl;
		totalDigits+=currentString.length(); cout << currentString << endl;
		}

		totalDigits += t.length();

		cout << totalDigits << endl;
	return 0;
}
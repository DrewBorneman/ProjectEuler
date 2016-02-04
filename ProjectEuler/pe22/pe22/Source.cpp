#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {

	vector<string> names;
	int intNameCounter = 0;
	ifstream inFile;
	int intNameScore = 0;
	int intTotalScore = 0;
	string strName = "";
	inFile.open("names.txt");
		while(!inFile.eof()){
			getline(inFile, strName);
			names.push_back(strName);
		}

		sort(names.begin(), names.end());

		names.push_back("");

		cout << names[intNameCounter] << endl;

		while(names[intNameCounter] != ""){
			
			strName = names[intNameCounter];
			for(string::iterator i = strName.begin(); i !=strName.end(); i++){
				intNameScore += ((*i)-64);
			}


			intNameScore *= (intNameCounter+1);

			intTotalScore += intNameScore;

			cout << "Name #" << intNameCounter << ": " << strName <<  ".   Score: " << intNameScore << ".\n";

			if(intNameCounter==938){
				system("PAUSE");
			}

			intNameScore = 0;

			intNameCounter++;
		}

		cout << "Total score is: " << intTotalScore << ".\n";

return 0;

}
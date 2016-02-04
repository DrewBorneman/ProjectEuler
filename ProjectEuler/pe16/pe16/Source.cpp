#include<iostream>
#include<sstream>
#include<cmath>
#include<vector>

using namespace std;

int main(){
cout.precision(350);
//string largeNum = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
//int digits = 0;
//int counter = 0;
//char tempChar;
//int total = 0;
//
//string String = static_cast<ostringstream*>( &(ostringstream() << largeNum) ) ->str();
//
//for(int x = 0; x<largeNum.length(); x++){
//	tempChar = String.at(x);
//	tempChar = tempChar-48;
//	total += tempChar;
//}

	long long total = pow(2, 1000);
cout << total << endl;
return 0;
}
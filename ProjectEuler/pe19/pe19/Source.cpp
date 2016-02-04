#include<iostream>

using namespace std;

int main() {

	int days = 365;
	int pastDays = 0;
	int leapAugment = 0;
	int tempDays = 365;
	int date = 1;
	int month = 1;
	int year = 1900;
	int weekday = 1;
	int counter = 0;

	for(year = 1900; year<2001; year++){
		
		if(year%4==0 && year%100!=0 || year%400==0){
			tempDays = 366;
			leapAugment = 1;
		}
		else{
			tempDays = 365;
			leapAugment = 0;
		}

		for(days = 89; days<=tempDays; days++){
			if(days>0 && days<32){
				month = 1;
				pastDays = 0;
			}
			else if(days>31 && days<(60 + leapAugment)){
				month = 2;
				pastDays = 31;
			}
			else if(days>(59 + leapAugment) && days<(91 + leapAugment)){
				month = 3;
				pastDays = 59+leapAugment;
			}
			else if(days>(90 + leapAugment) && days<(121 + leapAugment)){
				month = 4;
				pastDays = 90+leapAugment;
			}
			else if(days>(120 + leapAugment) && days<(152 + leapAugment)){
				month = 5;
				pastDays = 120+leapAugment;
			}
			else if(days>(151 + leapAugment) && days<(182 + leapAugment)){
				month = 6;
				pastDays = 151+leapAugment;
			}
			else if(days>(181 + leapAugment) && days<(213 + leapAugment)){
				month = 7;
				pastDays = 181+leapAugment;
			}
			else if(days>(212 + leapAugment) && days<(244 + leapAugment)){
				month = 8;
				pastDays = 212+leapAugment;
			}
			else if(days>(243 + leapAugment) && days<(274 + leapAugment)){
				month = 9;
				pastDays = 243+leapAugment;
			}
			else if(days>(273 + leapAugment) && days<(305 + leapAugment)){
				month = 10;
				pastDays = 273+leapAugment;
			}
			else if(days>(304 + leapAugment) && days<(335 + leapAugment)){
				month = 11;
				pastDays = 304+leapAugment;
			}
			else if(days>(334 + leapAugment) && days<(366 + leapAugment)){
				month = 12;
				pastDays = 334+leapAugment;
			}

			date = days-pastDays;
			if(date==1 && weekday == 7)
			{
				counter++;
			}

			weekday++;
			if(weekday>7)
				weekday = 1;
		}
	}

	cout << counter << endl;

return 0;
}
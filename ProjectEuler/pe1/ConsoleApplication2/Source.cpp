#include <iostream>
#include <cmath>

using namespace std;

int main () {

int x =0;
int y=0;
int z=0;
int total=0;

while (x<1000) {
	y = x%3;
	z = x%5;
	if(y==0)
		total = total + x;
	else if (z==0)
		total = total + x;
	++x;
}
cout << "The sum is " << total << "\n";

return 0;
}
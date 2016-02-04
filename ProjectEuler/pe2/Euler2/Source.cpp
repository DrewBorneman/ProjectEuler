#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int seqcurrent = 1;
	int seq_1 = 0;
	int seq_2 = 0;
	int total = 0;
	int modtest = 0;
	while (seqcurrent < 4000000) {
		seq_2 = seq_1;
		seq_1 = seqcurrent;
		seqcurrent = seq_1 + seq_2;
		cout << seqcurrent << endl;
		modtest = seqcurrent%2;
		if (modtest == 0)
			total = total + seqcurrent;
	}
	cout << "total is " << total << endl;
	return 0;
}
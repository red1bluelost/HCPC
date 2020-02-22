#include <iostream>
#include <string>
using namespace std;

int main() {
	char input[10];
	cin >> input;

	int i = 0, v = 0, x = 0, l = 0;
	for (auto c : input) {
		switch(c) {
		case 'I':
			++i;
			break;
		case 'V':
			++v;
			break;
		case 'X':
			++x;
			break;
		case 'L':
			++l;
			break;
		}
	}

	string tens = "", ones = "";

	if (l && x > 1) {
		tens = "L";
		for(; x > 0; --x){
			tens = tens + "X";
		}
	} else if (l) {
		tens = "L";
		for(; x > 0; --x){
			tens = "X" + tens;
		}
	} else if (x) {
		for(; x > 0; --x){
			tens = tens + "X";
		}
	}

	if (tens == "LXXX") {
		tens = "XC";
	}

	if (v && i > 1) {
		ones = "V";
		for(; i > 0; --i){
			ones = ones + "I";
		}
	} else if (v) {
		ones = "V";
		for(; i > 0; --i){
			ones = "I" + ones;
		}
	} else if (v) {
		for(; i > 0; --i){
			ones = ones + "I";
		}
	}
	cout << tens + ones;


	return 0;
}


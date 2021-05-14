#include <iostream>

using namespace std;

// we are looking for n not m 
int get_change(int m) {
	int n = 0; // n is numer of coins
	while (m > 0) {
		if (m >= 10) {
			m = m - 10;
		}
		else if (m >= 5) {
			m = m - 5;
		}
		else  {
			m = m - 1;
		}
		 n = n + 1;
	}

	return n;
}

int main() {
	int m ; // m is money
	cin >>  m;
	cout << get_change(m) ,'\n';
}

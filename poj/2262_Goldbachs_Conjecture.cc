#include <iostream>
#include <string>

using namespace std;

int isNotPrime[1000000] = {0};

void initPrime(int n) {
	isNotPrime[0] = 1;
	isNotPrime[1] = 1;

	for (int i = 2; i < n; i++) {
		if (!isNotPrime[i]) {
			for (int j = i * 2; j < n; j += i) {
				isNotPrime[j] = 1;
			}
		}
	}

}

int main() {

	initPrime(1000000);

	while (true) {
		int a;
		cin >> a;

		if (a == 0) {
			break;
		}

		for (int i = 3; i <= a / 2; i += 2) {
			if (!isNotPrime[i] && !isNotPrime[a - i]) {
				cout << a << " = " << i << " + " << a - i << endl;
				break;
			}
		}

	}

	return 0;
}

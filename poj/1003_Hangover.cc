#include <iostream>
#include <string>

using namespace std;

int count[26] = {0};

int main() {
	while (true) {
    double target;
		cin >> target;

		if (target == 0.00) {
			break;
		}

		int count = 0;
		double sum = 0;
		
		while (sum < target) {
			count++;
			sum += 1.00 / (count + 1);
		}

		cout << count << " card(s)" << endl;
		
  }


   return 0;
}

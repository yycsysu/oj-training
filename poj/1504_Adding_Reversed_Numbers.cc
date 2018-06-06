#include <iostream>
#include <string>

using namespace std;

int main() {
	int x;
	cin >> x;

	while (x--) {
		string a, b;
		cin >> a >> b;

		int next = 0;
		int size = a.size() > b.size() ? a.size() : b.size();

		string result = "";
		int start = 0;
		for (int i = 0; i < size; i++) {
			int abit = 0, bbit = 0;
			if (i < a.size()) {
				abit = a[i] - '0';
			}
			if (i < b.size()) {
				bbit = b[i] - '0';
			}
			
			int sum = abit + bbit + next;

			next = sum / 10;

			if (start == 0 && (sum % 10) != 0) {
				start = 1;
			}

			if (start == 1) {
				result += (sum % 10) + '0';
			}
		}

		if (next == 1) {
			result += "1";
		}

		cout << result << endl;

	}

   return 0;
}

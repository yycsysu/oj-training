#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct DNA {
	int ord;
	string body;
};

// A C G T
int getOrd(string line) {
	int ord = 0;
	for (string::iterator it1 = line.begin(); it1 != line.end(); ++it1) {
	  for (string::iterator it2 = it1 + 1; it2 != line.end(); ++it2) {
			if (*it1 > *it2) {
				ord++;
			}
		}
	}

	return ord;
}

int main() {
	int len, num;

	cin >> len >> num;

	DNA dnas[100];

	string line;
		getline(cin, line);
	for (int i = 0; i < num; i++) {
		getline(cin, line);
		dnas[i].ord = getOrd(line);
		dnas[i].body = line;

	}

	for (int i = 0; i < num; i++) {
		int min = i;
		for (int j = i; j < num; j++) {
			if (dnas[min].ord > dnas[j].ord) {
				min = j;
			}
		}
		DNA temp = dnas[min];
		dnas[min] = dnas[i];
		dnas[i] = temp;
	}

	for (int i = 0; i < num; i++) {
		cout << dnas[i].body << endl;
	}

   return 0;
}

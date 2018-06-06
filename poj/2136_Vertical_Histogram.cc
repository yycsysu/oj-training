#include <iostream>
#include <string>

using namespace std;

int count[26] = {0};

int main() {
  string line;
	int numberLines = 0;
	while (numberLines++ < 4 && getline(cin, line)) {
		for (std::string::iterator it = line.begin(); it != line.end(); ++it) {
			char c = *it;
			if (c >= 'A' && c <= 'Z') {
				count[c - 'A']++;
			}
    }
  }


		while (true) {
			int m = 0;
			for (int i = 0; i < 26; i++) {
				if (count[m] <= count[i]) {
					m = i;
				}
			}

			if (count[m] <= 0) {
				break;
			}

			for (int i = 0; i <= m; i++) {
				if (count[i] == count[m]) {
					cout << '*';
					count[i]--;
				} else {
					cout << ' ';
				}
				cout << ' ';
			}

			cout << endl;
		}
		cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
 
   return 0;
}

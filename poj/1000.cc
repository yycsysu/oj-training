#include <iostream>
#include <string>

using namespace std;

int count[26] = {0};

int main() {
  string line;
	while (getline(cin, line)) {
		double target = stod(line);
		cout << target << endl;

		
  }


   return 0;
}

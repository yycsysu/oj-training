#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
			int a;

			cin >> a;
			int result = 0 ;
			while (a != 0) {
				a /= 5;
				result += a;
			}

			cout << result << endl;
  }


   return 0;
}

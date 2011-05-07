#include <iostream>

using namespace std;

int main() {
	char c;
	bool first = 0;
	while(scanf("%c",&c)==1){
		if (c == '\"') {
			if (!first) cout << "``";
			else cout << "\'\'";
			first = !first;
		}
	else cout << c;
	}
	return 0;
}

#include <iostream>
#include <stack>

using namespace std;


int main() {
	char str;
	stack<char> letters;
	while(scanf("%c", &str) == 1){
		if (isspace(str)){
			while (!letters.empty()) {
				cout << letters.top();
				letters.pop();
			}
			cout << str;
		} 
		else letters.push(str);
	}
	return 0;
}

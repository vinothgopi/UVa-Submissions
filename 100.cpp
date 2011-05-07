#include <iostream>

using namespace std;

int main() {
	int a,b;
	int max=0;
	int temp;

	while (cin >> a >> b){
		cout << a << " " << b << " ";
		if (b<a){
			temp=a;
			a=b;
			b=temp;
		}


		for (; a<=b; a++) {
				temp=a;
				int counter=0; 


				while (temp != 1 ) {
				if (temp%2 == 1) temp=3*temp+1;
				else temp/=2;
				counter++;
				}

			counter++;
			counter>max?max=counter:max=max;
			
		}

	cout << max << endl;
	max=0;
	}

	return 0;
}
#include <iostream>
#include <string>

using namespace std;

char ab[28]="aabcdefghijklmnopqrstuvqxyz";
string a,b;

int linear_search(char arr[], string val)
{
 for(int i = 0; i < 28; i++){
	cout << i << " " << arr[i] << " " << val << endl;
	 if (arr[i] == val) return i;
  
}
 return -1;
}

int main (){
	while (cin >> a){
		//cin >> b;
		cout << linear_search(ab,a);
		
	}
	return 0;
}
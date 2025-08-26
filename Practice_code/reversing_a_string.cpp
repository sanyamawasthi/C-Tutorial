#include <iostream>
#include <string>
using std::cout, std::cin, std::endl;

int main(){
	std::string s;
	cin >> s;

	int count = 0;
	while(s[count]){
		++count;
	}
	cout << "size of string : " << count << endl;

	for (auto i=count-1; i>=0; i--){
		cout << s[i];
	}
	cout << endl;
}

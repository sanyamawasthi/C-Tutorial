#include <iostream>
using namespace std;

int main(){
	int a, b;
	cout << "Enter two values: ";
	cin >> a >> b;

	if (a%b > 0) cout << "Not divisible" << endl;
	else cout << a << " is divisible by " << b << endl;
}

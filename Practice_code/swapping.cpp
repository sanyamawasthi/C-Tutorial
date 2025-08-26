#include <iostream>
using namespace std;

int main(){
	int a, b;// want to write in ascending order

	cout << "Enter : ";
	cin >> a >> b;
	int temp;
	if (a>b) {temp = a ; a = b ; b = temp; } //{} is statement block
	cout << a <<" " << b << endl;
}

#include <iostream>
#include <string>
using namespace std;

int main(){esc: cout << endl;
	int x;
	cout << "Enter the number : ";
	cin >> x;
	cout << "Number is : " << x << endl; cout << endl;
	
	string s;
	cout << "Want to continue(Yes(Y)/No(N)) : ";
	cin >> s;

	if (s=="Y"){goto esc;}
	else if (s=="N"){return 0;}
}

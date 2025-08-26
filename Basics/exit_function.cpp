#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){esc: cout << endl;
	int a;
	cout << "Enter the number : ";
	cin >> a;
	cout << endl;
	cout << "Number is : "<< a << endl; cout << endl;

	cout << "Want to continue(C)/Exit(E) : ";
	string s;
	cin>>s;
	if (s=="C"){goto esc;}
	else if (s=="E"){cout << endl; exit(1);}
}
//exit() can be used to sxit whole programme at once.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float q;
	cout << "Enter any number (except negative)";
	cin >> q;
	 
	while (q>=0)
	{
		cout << "square root of " << q << " is " << sqrt(q) << endl;
		cout << endl;
		cout << "Enter another value or write -1 to escape: ";
		cin >> q;
	}//for more than 1 line in loops use the curly braces to cancel the repeatation of first line.
	cout << "Thank you" << endl;
	return 0;
}

#include <iostream>
using namespace std;

int main()
{	int m = 50;
	const int  n = 10;
	m = 10;
// 	n = m; //Cannot assign readable a new value
	cout << "m = " << m << " & " << "n = " << n << "\n";
}

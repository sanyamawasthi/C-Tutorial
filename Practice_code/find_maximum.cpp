#include <iostream>
using namespace std;

int main(){
	int max, n;
	cout << "Enter positive numbers: ";
	cin >> n;

	for (max = n; n > 0; )
	{
		if (n > max) max = n;
		cin >> n;
	}

	cout << "maximum is : " << max << endl;
}

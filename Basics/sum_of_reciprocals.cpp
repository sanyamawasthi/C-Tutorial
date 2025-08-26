#include <iostream>
using namespace std;

int main(){
	int m;

	cout << "Enter the number: ";
	cin >> m;

	int i=1;

	float sum = 0.0;

	while (sum < m)
		sum += 1.0/i++;

	cout << "sum of first " << i << " numbers as reciprocal is : " << sum <<endl;
	return 0;
}

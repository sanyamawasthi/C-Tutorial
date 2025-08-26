#include <iostream>
using namespace std;

int main(){
	int min;
	int m, n;
	cout << "Enter the two numbers : ";
	cin >> m >> n;
	min = ( m<n ? m:n );
	cout << min << " is the minimum number" << endl;
	return 0;
}

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <climits>
using namespace std;

int main(){typedef int a[];
	a arr = {1,2,3,4,5};
	int size = sizeof(arr)/sizeof(int);
	
	cout << size << endl;
	for (int i = 0; i<size; i++){cout << arr[i] << endl;}
	return 0;
}

#include <iostream>
#include <climits>
using namespace std;

int main(){float a[]={34.43, 3454.2345, 23.543};//each takes 4 bytes so total 12 bytes
	int size = sizeof(a)/sizeof(float);
	cout << "size of array is : "<< size << endl; cout << endl;
	for (int i=0; i<size; i++){cout << i << "\t" << a[i] << endl;}
}

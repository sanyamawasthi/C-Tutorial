#include <iostream>
#include <cmath>
using namespace std;

void print(int [], int);

int main (){int a[] = {1,2,3,4,5};
	print(a,5);
	return 0;}

void print(int a[], int n)
{	for (int i=0; i<n; i++){cout << a[i] << endl;}}



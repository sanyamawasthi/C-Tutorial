#include <iostream>
using namespace std;

int find(float , float [], int n);

int main(){int n; cout << "Enter the size of the array : "; cin >> n;
	cout << endl;
	float a[n], x;
	cout << "Enter the numbers : " << endl;
	for (int i=0; i<n; i++){cout << "a[" << i <<"] : "; cin >> x;
       		a[i]=x;}
	float b;
	cout << "Enter the number to find : ";
	cin >> b; cout << endl;
	cout << "location is : " << find(b, a, n) << endl;
}

int find(float b, float a[], int n)
{	int k;
	for (int i=0; i<n; i++){if (a[i]==b) {k = i+1;} else {k = 0;}}
	return k;
}


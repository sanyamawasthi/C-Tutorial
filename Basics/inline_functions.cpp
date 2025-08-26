#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

inline float root(float x){float a = sqrt(x); return a;}

int main(){float x;
	cout << "Enter any positive value : ";
	cin >> x;
	cout << root(x) << endl;
	return 0;}


